#include <stdio.h>
/**
*  main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int k, b;
for (k = 48; k <= 56; k++)
{
for (b = 49; b <= 57;  b++)
{
if (b > k)
{
putchar(k);
putchar(b);
if (k != 56 || b != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
