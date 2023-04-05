#include "main.h"
/**
* _strlen_recursion - string length
* @s: string
*Return: the length of string
*/
int _strlen_recursion(char *s)
{
int i = 0;
if (*s)
{
i++;
i += _strlen_recursion(s + 1);
}
return (i);
}
