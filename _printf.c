#include "main.h"
#include <unistd.h>

/**
* _printf - produces output according to a format
* @format: is a character string
* Return: numbers of characters printed
*/

int _printf(const char *format, ...)
{
	va_list arg;
	int i, count = 0, value;
	int (*func)(va_list);

	va_start(arg, format);

	i = 0;
	while (*(format + i))
	{
		if (format[i] != '%')
		{
			value = write(1, &format[i], 1);
			count += value;
			i++;
			continue;
		}
		if (format[i] == '%')
		{
			func = check_specifier(&format[i + 1]);
			if (func != NULL)
			{
				value = func(arg);
				count += value;
				if (format[i+2] != '\0')
				{
					i += 2;
					continue;
				}
				else
				{
					break;
				}
			}
		}
	}
	va_end(arg);
	return (count);
}

