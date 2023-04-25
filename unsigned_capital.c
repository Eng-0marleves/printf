#include "main.h"

/**
 * cap_unsigned_hex_handler- function to handle unknown handler
 *@ap: handler passed
 *Return: int
 */
int cap_unsigned_hex_handler(va_list ap)
{
	return (printf("%X", va_arg(ap, int)));
}

