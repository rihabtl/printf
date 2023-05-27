#include "main.h"
/**
 * _printf - produces output according to a format
 * @format:
 * @...:
 * Return: counter
 */
int _printf(const char *format, ...)
{
va_list arg;
va_start(arg, format);
int counter = 0;
if (!format || ((format[0] == '%' && !format[1]) ||
(format[0] == '%' && format[1] == ' ' && !format[2])))
{
return (-1);
}
while (*format)
{
if (*format == '%')
{
format++;
handle_format(arg, *format, &counter);
}
else
{
_putchar(*format);
counter++;
}
format++;
}
va_end(arg);
return (counter);
}
