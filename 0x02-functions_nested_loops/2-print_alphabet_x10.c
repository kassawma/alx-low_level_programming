#include "main.h"
/**
* print_alphabet_x10 - print the 10 time alphabet
*
* follow by new line
*/
void print_alphabet_x10(void)
{
int i;
i = 0;
while (i < 10)
{
char ch;
ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
i++;
}}
