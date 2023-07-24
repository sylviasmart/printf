#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
* _printf - A function used to print a string to stdout
* @format: A character string
*
* Return: printf string
*/

int _printf(const char *format, ...)
{
va_list args;
va_start(args, format);
int count = 0;

while (*format)
{
if (*format == '%')
{
format++;
if (*format == 'c')
count += _putchar(va_arg(args, int));
else if (*format == 's')
for (const char *s = va_arg(args, const char *); *s; s++)
count += _putchar(*s);
else if (*format == '%')
count += _putchar('%');
else
count += _putchar('%') + _putchar(*format);
}
else
{
count += _putchar(*format);
}

format++;
}

va_end(args);
return (count);
}
