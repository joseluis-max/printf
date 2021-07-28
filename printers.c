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
	unsigned int num;

	n = va_arg(list, int);
	div = 1;
	if (n < 0)
	{
		buffer[*j] = 45;
		num = n * -1;
		*j += 1;
	}
	else
	{
		num = n;
	}
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
/**
 * _print_binary - add a buffer a binary
 * @list: list of arguments
 * @buffer: array with the string for print without format
 * @j: index of buffer
 */
void _print_binary(char *buffer, va_list list, int *j)
{
	int n = va_arg(list, int);
	char arr[8] = {'0', '0', '0', '0', '0', '0', '0', '0'};
	int i = 0;
	int k = 8;
	
	if (n > 0)
	{
		while (n > 0)
		{
			if (n % 2  == 0)
			{
				arr[i] = '0';
				i++;
			}
			else
			{
				arr[i] = '1';
				i++;
			}
			n  = (int) n / 2;
		}
	}
	while (k > 0)
	{
		buffer[*j] = arr[k];
		k--;
		*j += 1;
	}
}
