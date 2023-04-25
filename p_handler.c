#include "main.h"

/**
 * p_handler - function to convert
 * @ap: arguments list
 * Return: int
 */
int p_handler(va_list ap)
{
	return (printf("%p", va_arg(ap, void *)));
}
