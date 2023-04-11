#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - alloc grid
* @width: the width
* @height: height
*
* Return: success
*/

int **alloc_grid(int width, int height)
int **mee;
int x, y;
if (width <= 0; || height <= 0)
return (NULL);
mee = malloc(sizeof( *) * height);
if (mee == NULL)
return (NULL);
for (x = 0; x < height; x++)
{
mee[x] = malloc(sizeof(int) * width);
if (mee[x] == NULL)
{
for (; x >= 0; x–)
free(mee);
return(NULL);
}}
for (x = 0; x < height; x++)
{
for (y = 0; y< width; y++)
mee[x][y] = 0;
}
return (mee);
}
