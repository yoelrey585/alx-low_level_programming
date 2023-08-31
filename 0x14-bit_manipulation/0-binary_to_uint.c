#include "main.h"
/**
 * conv_bin_to_uint - function to convert binary to
 * unsigned integer
 * 
 * @binary - binary digit to be converted
 * 
 * return - the unsigned integer
**/
unsigned int conv_bin_to_uint(const char *binary)
{
    int z;
    unsigned int decimal = 0;

    if(!binary)
    {
        return (0);
    }
    for (z = 0; binary[z]; z++)
    {
        if(binary[z] < '0' || binary[z] > '1')
            return (0);
        decimal = 2*decimal + (binary[z] - '0');
    }
    
    return (decimal);
}