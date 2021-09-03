#include "main.h"

/**
 * _isupper - Checks for uppercase characters.
 * @c: The ascii code for character to chack.
 *
 * Return: 1 when character is upper and 0 when otherwise.
 */
int _isupper(int c)
{
        int upper;

        if (c >= 65 && c <= 90)
        {       
                upper = 1;
        }       
        else
        {       
                upper = 0;
        }       
        return (upper);
}
