#include <stdio.h>
#include "main.h"
/**
* main - main function
* @argc: argument
* @argv: arrangement
* Return: success
*/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
