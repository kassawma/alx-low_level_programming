#include "main.h"
/**
* _strlen - print the
* @s: the strings
* Return: length
*/
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}
