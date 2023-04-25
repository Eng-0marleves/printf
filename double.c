#include "main.h"

/**
 * double_handler - function to convert %s
 * @ap: arguments list
 * Return: int
 */
int double_handler(va_list ap)
{
	return (printf("%d", va_arg(ap, int)));
}
