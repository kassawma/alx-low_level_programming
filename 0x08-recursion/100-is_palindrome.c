#include "main.h"
int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);
/**
* is_palindrom - plain rom
* @s: string
* Return: 1 if succes 0 is not
*/
int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
* _strlen_recursion - string length
* @s: string
*Return: 1 if success
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
/**
* check_pal - check pal
* @s: string
* @i: insert
* @len: leng
* Return: 1 if values succes
*/
int check_pal(char *s, int i, int len)
{
if (*(s + i) != *(s + len - 1))
return (0);
if (i >= len)
return (0);
return (check_pal(s, i + 1, len - 1));
}
