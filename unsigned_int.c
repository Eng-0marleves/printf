#include "main.h"
/**
 *unsigned_int_handler - function to handle passed address
 *@ap: handler passed
 *Return: int
 */
int unsigned_int_handler(va_list ap)
{
	return (printf("%u", va_arg(ap, int)));
}

