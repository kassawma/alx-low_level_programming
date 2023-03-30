#include "main.h"
/**
* _strncpy - copy the string
* @dest: input value
* @src: input value
* @n: input value
* Return: success
*/
char *_strncpy(char *dest, char *src, int n)
{
int j;
while (j < n && src[j] != '\0')
{
dest[j] = src[j];
j++;
}
while (j < n)
{
dest[j] = '\0';
j++;
}
return (dest);
}
