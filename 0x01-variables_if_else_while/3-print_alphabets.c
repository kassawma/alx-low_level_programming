#include <stdio.h>
/**
* main - Print english lowercase and upper case Alphabet
* Return: Always 0 (Success)
*/
int main(void)
{
char alpah[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int b;
for (b = 0; b < 52; b++)
{
putchar(alpah[b]);
}
putchar('\n');
return (0);
}
