#include <unistd.h>
/**
 * _putchar - putchar function
 * @z: character to be outputted
 * 
 * return - on success 1 on failure -1
**/
int _putchar(char z)
{
    return (write(1, &z, 1));
}
