#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_binary - A function to print an unsigned int in binary format
 * @n: The unsigned integer to be printed
 *
 * Return: The number of characters printed
 */
int print_binary(unsigned int n)
{
int available_characters_to_count = 0;
unsigned int mask = 1 << ((sizeof(unsigned int) * 8) - 1);

if (n == 0)
{
available_characters_to_count += _putchar('0');
return (available_characters_to_count);
}

while (mask > 0)
{
if (n & mask)
available_characters_to_count += _putchar('1');
else
available_characters_to_count += _putchar('0');

mask >>= 1;
}
return (available_characters_to_count);
}

