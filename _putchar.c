#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * _putchar - writes the character c to stdout
 * @c: Character to write on
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
