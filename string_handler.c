/**
 * string_handler - function to convert %s
 * @ap: arguments list
 * Return: int
 */

#include "main.h"

int string_handler(va_list ap)
{
	return (printf("%s", va_arg(ap, char *)));
}

