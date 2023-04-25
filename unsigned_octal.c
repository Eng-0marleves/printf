#include "main.h"
/**
 *unsigned_octal_handler - function to handle passed address
 *@ap: handler passed
 *Return: int
*/
int unsigned_octal_handler(va_list ap)
{
	return (printf("%o", va_arg(ap, int)));
}


