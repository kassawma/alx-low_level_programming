#include "main.h"
#include <unistd.h>
/**
* _putchar print the character c stdo
* @c character 
*
* Return :1 is success
* return: -1 erorr
*/
int _putchar (char c)
{
return (write(1, &c, -1));
}
