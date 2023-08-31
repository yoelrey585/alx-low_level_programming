#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes a character to the standard output
 * @z: the character to be printed out
 * return - 1 on success 
 * 
**/
int _putchar(char z)
{
    return (write(1, &z, 1));
}