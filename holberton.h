#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
void _print_char(char *buffer, va_list, int *j);
void _print_string(char *buffer, va_list, int *j);
void _print_integer(char *buffer, va_list, int *j);
/**
 * struct printers - format printers
 * @charcter: character type data
 * @fprint: function for print every type of data
 */
typedef struct printers 
{
	char *character;
	void (*fprint)(char *buffer, va_list, int *j);
} PRINTERS_T;

#endif 
