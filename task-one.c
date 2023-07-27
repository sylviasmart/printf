#include "main.h"

/**
 * print_binary - A function to print an unsigned integer in binary format
 * @n: The unsigned integer to be printed
 *
 * Return: The total number of characters printed
 */
int print_binary(unsigned int n)
{
int characters_available_to_count = 0;
int binary[32];
int i = 0;

if (n == 0)
return (_putchar('0'));

while (n > 0)
{
binary[i++] = n % 2;
n /= 2;
}

for (i = i - 1; i >= 0; i--)
characters_available_to_count += _putchar(binary[i] + '0');

return (characters_available_to_count);
}

/**
 * print_integer - A function to print an integer
 * @n: The integer to be printed
 *
 * Return: The total number of characters printed
 */
int print_integer(int n)
{
int characters_available_to_count = 0;

if (n < 0)
{
characters_available_to_count += _putchar('-');
n = -n;
}

if (n == 0)
return (_putchar('0'));

if (n / 10)
characters_available_to_count += print_integer(n / 10);

return (characters_available_to_count + _putchar(n % 10 + '0'));
}

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
characters_available_to_count += _putchar(*s++);
}
else if (*format == 'd' || *format == 'i')
characters_available_to_count += print_integer(va_arg(args, int));
else if (*format == 'b')
characters_available_to_count += print_binary(va_arg(args, unsigned int));
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

