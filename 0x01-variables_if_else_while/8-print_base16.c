#include <stdio.h>
/**
*  main - print base hexadecimal
* Return: Always 0 (Success)
*/
int main(void)
{
int k;
for (k = 48; k < 58; k++)
{
putchar(k);
}
for (k = 97; k < 103; k++)
{
putchar(k);
}
putchar('\n');
return (0);
}
