#include "main.h"

/**
 * int_handler - function to convert %s
 * @ap: arguments list
 * Return: int
 */
int int_handler(va_list ap)
{
	return (printf("%i", va_arg(ap, int)));
}
