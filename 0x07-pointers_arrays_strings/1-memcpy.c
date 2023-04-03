#include "main.h"
/**
* _memcpy - function of the memory area
* @dest: memory where is stored
* @src: memory where is copied
* @n: number of bytes
* Return: copies of memory with n byted change
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
int r = 0;
int i = n;
for (; r < i; r++)
{
dest[r] = src[r];
n--;
}
return (dest);
}
