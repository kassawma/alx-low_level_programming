#include <stdio.h>
#include "main.h"
/**
*print_to_98 - print n to 98 natural number 
* 
*/
void print_to_98(int n)
{
int i, j;
if (n <= 98)
{
for (i = n; i <= 98; i++)
{
if (i != 98)
printf("%d, ", i);
else if (i == 98)
printf("%d\n", i);
}}
else if (n >= 98)
{
for (j = n; n >= 98; j--)
{
if (j != 98)
printf("%d, ", i);
else if (j == 98)
printf("%d\n", j);
}
}}
