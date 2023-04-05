#include "main.h"
/**
* _print_rev_recursion - print rev recursion
*@s: input string
*/
void _print_rev_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);

}}
