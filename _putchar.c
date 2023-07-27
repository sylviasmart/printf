#include <unistd.h>
#include "main.h"

/**
 * _putchar - A function to print a character to stdout
 * @c: The character to be printed
 *
 * Return: On success, return the character printed. On error, return -1.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

