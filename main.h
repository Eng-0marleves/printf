#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
int _putchar(char c);
int _printf(const char *format, ...);
int char_handler(va_list ap);
int int_handler(va_list ap);
int double_handler(va_list ap);
int unsigned_int_handler(va_list ap);
int unsigned_octal_handler(va_list ap);
int unsigned_hex_handler(va_list ap);
int p_handler(va_list ap);
int cap_unsigned_hex_handler(va_list ap);
int string_handler(va_list ap);
int handle_format(char f, va_list args);

/**
*struct format_handler - function
*@handle: function
*@format_handler: function
*/

typedef struct format_handler
{
	char *format_handler;
	int (*handle)(va_list);
} format_handler_t;

#endif
