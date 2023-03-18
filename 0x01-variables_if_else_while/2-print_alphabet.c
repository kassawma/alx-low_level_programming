#include <stdio.h>
/**
* main - Print english Alphabet
* Return: Always 0 (Success)
*/
int main(void)
{
char alpah[26] = "abcdefghijklmnopqrstuvwxyz";
int b;
for (b = 0; b < 26; b++)
{
putchar(alpah[b]);
}
putchar('\n');
return (0);
}
