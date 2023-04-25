#include "main.h"
/**
 *handle_format - function
 *@f: char
 *@args: list if arguments
 *Return: Always 0
 */
int handle_format(char f, va_list args)
{
	format_handler_t handlers[] = {
	{"c", char_handler},
	{"s", string_handler},
	{"i", int_handler},
	{"d", double_handler},
	{"u", unsigned_int_handler},
	{"o", unsigned_octal_handler},
	{"x", unsigned_hex_handler},
	{"X", cap_unsigned_hex_handler},
	{"p", p_handler},
	{NULL, NULL}};

	int y = 0;

	while (handlers[y].format_handler)
	{
		if (f == handlers[y].format_handler[0])
			return (handlers[y].handle(args));
		y++;
	}
	return (0);
}
/**
 * last_char_handler - function
 * @m: parameter to passed
 * @args: list
 * Return: length
 */
int last_char_handler(char m, va_list args)
{
	int length = 0;

	if (m == '%')
		length += printf("%%");
	else if (m == 'r')
		length += printf("%%r");
	else
		length += handle_format(m, args);
	return (length);
}
/**
 *_printf - function to print the passed conversion specifier
 *@format: format to be passed
 *Return: i which indicated the number of chars
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	int length = 0;
	char lastChar = '\0';

	va_start(args, format);
	while (format && format[i] != '\0')
	{
		if (lastChar == '%')
		{
			length += last_char_handler(format[i], args);
			lastChar = '\0';
		}
		else if (format[i] != '%')
		{
			length += printf("%c", format[i]);
			if (lastChar == '%' && format[i] == '%')
				lastChar = '\0';
			else
				lastChar = format[i];
		}
		else
			lastChar = format[i];
		i++;
	}
	va_end(args);
	return (length);
}
