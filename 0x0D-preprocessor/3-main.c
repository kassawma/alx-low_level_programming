#include <stdio.h>
#include "3-function_like_macro.h"
#include "3-function_like_macro.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int k;
    int m;

    k = ABS(-98) * 10;
    m = ABS(98) * 10;
    printf("%d, %d\n", k, m);
    return (0);
}
