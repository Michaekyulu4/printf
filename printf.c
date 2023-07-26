#include "main.h"
/**
 * _printf - print to stout formatted text
 *
 * @format: format specifier
 * Return: no of bytes printed
 */
int _printf(const char *format, ...)
{
	unsigned int i, stringcount, putstr, count = 0;

	va_list arg;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			inputch(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			inputch(va_arg(args, int))
				i++;
		}
		else if (format[i + 1] == 's')
		{
			stringcount = putstr(va_arg(args, char *));
			i++;
			count += (stringcount - 1);
		}
		else if (format[1 + 1] == '%')
		{
			inputch('%');
		}
		count += 1;

	}
	va_end(args);
	return (count);
}
