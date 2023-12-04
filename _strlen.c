#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
* _strlen - returns the number of characters in a string
 * @string: pointer to a string,
 * Return: Length of string.
*/

unsigned int _strlen(const char *string)
{
    /* declare and initialize the len variable */
    size_t len = 0;

    /* Check and handle NULL pointer */
    if (string == NULL)
    {
        return (0);
    }

    /* if pointer is not NUll, iterate and counter the string*/
    while (*string != '\0')
    {
        len++;
        string++;
    }
    /* return the len of the string */
    return (len);
}

