#include "main.h"
int a(int n, int i);
/**
* is_prime_number - print the prime number
* @n: number primer
* Return: success 1
*/
int is_prime_number(int n)
{
if (n <= 0)
return (0);
return (a(n, n - 1));
}
/**
* a - function actual print
* @n: input
* @i: input
* Return: 1 success
*/
int a(int n, int i)
{
if (i == 1)
return (1);
if (n % i == 0 && i > 0)
return (0);
return (a(n, n - 1));
}
