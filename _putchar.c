#include <unistd.h>

/**
* _putchar - prints character ito stdout,
 * @c: character to print,
 * Return: 1 on success, -1 on fail.
*/

int _putchar(char c)
{
    if (write(1, &c, 1) != 1)
    {
        return (-1);
    }
    return (1);
}