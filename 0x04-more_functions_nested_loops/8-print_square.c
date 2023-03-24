#include "main.h"
/**
* print_square - print the square
* @size: valyes
*/
void print_square(int size)
{
if (size < 0)
{
_putchar('\n');
}
else
{
int i, j;
for (i = 0; i < size; size++)
{
for (j = 0; j < size; size++)
{
_putchar('#');
}
_putchar('\n');
}}}
