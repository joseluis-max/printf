#include "holberton.h"
#include <stdarg.h>
#include <unistd.h>
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
	char *str;

	va_start(list, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					buffer[j] = va_arg(list, int);
				break;
				case 's':
					k = 0;
					str = va_arg(list, char *);
					while (str[k])
					{
						buffer[j] = str[k];
						j++;
						k++;
					}
				break;
			}
		}
		else
		{
			buffer[j] = format[i];
		}
		i++;
		j++;
		count++;
	}
	return (write(1, &buffer, count));
}
