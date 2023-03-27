#include "main.h"
/**
* _puts - put string the
* @str: string
*/
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(str++);
}
_putchar('\n');
}
