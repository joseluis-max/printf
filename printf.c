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
	int n;
	int div;
	int num;
	int k;
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
					j++;
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
				case 'd':
					n = va_arg(list, int);
					div = 1;

					if (n < 0)
					{
						buffer[j] = '-';
						num = n * -1;
						j++;
					}
					num = n;
					while (num / div > 9)
						div *= 10;
					while (div != 0)
					{
						buffer[j] = '0' + (num / div);
						num %= div;
						div /= 10;
						j++;
					}
				}
			}
			else
			{
				buffer[j] = format[i];
				j++;
			}
		i++;
	}
	return (write(1, &buffer, j));
}
