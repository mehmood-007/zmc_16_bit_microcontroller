/* =====================================================================================
 * linear_search.c - reference C program for linear_search.asm / mem.mem (zm_processor)
 *
 * Hand-compiled to linear_search.asm; mem.mem is the resulting machine code + data.
 * Data lives in external (Wishbone) memory; the array/keys are pre-loaded by mem.mem.
 *
 *   ext[0x1000..0x1007] : array = {0x0012, 0x0034, 0x0056, 0x0078,
 *                                  0x009A, 0x00BC, 0x00DE, 0x00F0}
 *   ext[0x1010..0x1011] : key   = {0x009A, 0x1234}
 *   ext[0x1020..0x1021] : result (pre-set to 0xDEAD)  -> expected {0x0004, 0xFFFF}
 * ===================================================================================== */
#include <stdint.h>

#define N       8u
#define ARRAY   ((volatile const uint16_t *)0x1000)
#define KEY     ((volatile const uint16_t *)0x1010)
#define RESULT  ((volatile uint16_t *)0x1020)

/* Return the index of key in a[0..n-1], or 0xFFFF (-1) if it is not present. */
uint16_t linear_search(volatile const uint16_t *a, uint16_t n, uint16_t key)
{
    uint16_t i;

    for (i = 0; i != n; i++)
        if (a[i] == key)
            return i;
    return 0xFFFF;
}

void main(void)
{
    RESULT[0] = linear_search(ARRAY, N, KEY[0]);   /* found     -> 0x0004 */
    RESULT[1] = linear_search(ARRAY, N, KEY[1]);   /* not found -> 0xFFFF */
    for (;;)
        ;                                          /* HLT */
}

/* Interrupt service routine at 0x700 (testcase.v raises one interrupt). */
void isr(void)
{
}
