#include "main.h"

/**
 * char_handler - function to convert %s
 * @ap: arguments list
 * Return: int
 */
int char_handler(va_list ap)
{
	return (printf("%c", va_arg(ap, int)));
}
