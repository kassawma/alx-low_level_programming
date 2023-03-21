#include "main.h"
/**
* _isalpha - is alphabet
* @c: character
* Return: 1 is letter 0 otherwise
*/
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
