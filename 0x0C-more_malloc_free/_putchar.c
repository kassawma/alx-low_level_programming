#include "main.h"
#include <unistd.h>
/**
* _putchar - put char
* @n: print the character
* Return: 0 succes
* On error: -1
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
