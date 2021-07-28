#include "holberton.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stddef.h>
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
	char buffer[1024];
	void (*add_buffer)(char *buffer, va_list, int *j);
	va_list list;
	PRINTERS_T prints[] = {
		{"c", _print_char},
		{"s", _print_string},
		{"d", _print_integer},
		{"i", _print_integer},
		{NULL, NULL}
	};

	va_start(list, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '%')
		{
			i++;
			k = 0;
			while (prints[k].character != NULL)
			{
				if (prints[k].character[0] == format[i])
				{
					add_buffer = prints[k].fprint;
					add_buffer(buffer, list, &j);
				}
				k++;
			}
		}
		else
		{
			if (format[i] == '%')
				i++;
			buffer[j] = format[i];
			j++;
		}
		i++;
	}
	va_end(list);
	return (write(1, buffer, j));
}
