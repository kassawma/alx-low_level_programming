#include <stdio.h>
#include "main.h"
/**
* main - mainfunction
* @argc: argument
* @argv: arangmennt
* Return: success
*/
int main(int argc, char *argv[])
{
(void) argv; /*ignor array*/
printf("%d\n", argc - 1);
return (0);
}
