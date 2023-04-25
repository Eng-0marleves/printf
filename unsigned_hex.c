#include "main.h"
/**
 *unsigned_hex_handler- function to handle unknown handler
 *@ap: handler passed
 *Return: int
*/
int unsigned_hex_handler(va_list ap)
{
	return (printf("%x", va_arg(ap, int)));
}

