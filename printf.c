#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - A function used to print a formatted string to stdout
 * @format: A character string containing the format and data to print
 *
 * Return: The total number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
va_list args;
int characters_available_to_count = 0;
va_start(args, format);

while (*format)
{
if (*format == '%')
{
format++;
if (*format == 'c')
characters_available_to_count += _putchar(va_arg(args, int));
else if (*format == 's')
{
const char *s = va_arg(args, const char *);
while (*s)
{
characters_available_to_count += _putchar(*s);
s++;
}
}
else if (*format == '%')
characters_available_to_count += _putchar('%');
else
characters_available_to_count += _putchar('%') + _putchar(*format);
}
else
{
characters_available_to_count += _putchar(*format);
}

format++;
}

va_end(args);
return (characters_available_to_count);
}

