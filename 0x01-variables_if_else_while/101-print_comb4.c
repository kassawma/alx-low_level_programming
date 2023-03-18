#include <stdio.h>
/**
* main - print three compositions
*
* Return: Always 0 (Success)
*/
int main(void)
{
int k, a, s;
for (k = 48; k < 58; k++)
{
for (a = 49; a < 58; a++)
{
for (s = 50; s < 58; s++)
{
if (k > a && a > s)
{
putchar(k);
putchar(a);
putchar(s);
if (a != 55 || s != 56)
{
putchar(',');
putchar(' ');
}}}}}
putchar('\n');
return (0);
}
