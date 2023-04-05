#include "main.h"
/**
*_puts_recursion - recurring
*@s: input
*Return: succes
*/
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}
