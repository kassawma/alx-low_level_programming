#include "main.h"
/**
* _memset - fill the block of memory
* @s: starting address of memory
* @b: the desired value
* @n: number of bytes
* Return: change array with new values for n values
*/
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
