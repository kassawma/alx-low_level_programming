#include "main.h"
int a(int n, int i);
/**
* _sqrt_recursion - square of recursion
* @n: number of square
* Return: the sqrt of rec n
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (a(n, 0));
}
/**
* a - function of actual squre recurring
* @n: input
* @i: input
* Return: return
*/
int a(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (a(n, i + 1));
}
