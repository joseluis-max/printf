#include "holberton.h"
#include <stdarg.h>
/**
 * _printf - print format string
 * @format: string with format for printf
 * Return: int long of string print
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int j = 0;
	int k;
	int count = 0;
	char buffer[1024];
	va_list list;

	va_start(list, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					buffer[i - 1] = va_arg(list, int);
				break;
				case 's':
					k = 0;
					char *str = va_arg(list, char *);

					while (str[k])
					{
						buffer[i + k - 1] = str[k];
						k++;
					}
				break;
			}
		}
		i++;
		count++;
	}
	return (write(1, &buffer, count));
}
