#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _print_char - add a buffer a char
 * @list: list of arguments
 * @buffer: array with the string for print without format
 * @j: index of buffer
 */
void _print_char(char *buffer, va_list list, int *j)
{
	buffer[*j] = va_arg(list, int);
	*j = *j + 1;
}
/**
 * _print_string - add a buffer a string
 * @list: list of arguments
 * @buffer: array with the string for print without format
 * @j: index of buffer
 */
void _print_string(char *buffer, va_list list, int *j)
{
	int k = 0;
	char *str = va_arg(list, char *);

	while (str[k])
	{
		buffer[*j] = str[k];
		*j = *j + 1;
		k++;
	}
}
/**
 * _print_integer - add a buffer a integer
 * @list: list of arguments
 * @buffer: array with the string for print without format
 * @j: index of buffer
 */
void _print_integer(char *buffer, va_list list, int *j)
{
	int n;
	int div;
	int num;

	n = va_arg(list, int);
	div = 1;
	if (n < 0)
	{
		buffer[*j] = '-';
		num = n * -1;
		*j = *j + 1;
	}
	num = n;
	while (num / div > 9)
		div *= 10;
	while (div != 0)
	{
		buffer[*j] = '0' + (num / div);
		num %= div;
		div /= 10;
		*j += 1;
	}
}

