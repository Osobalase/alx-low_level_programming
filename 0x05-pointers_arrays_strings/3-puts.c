#include "main.h"

/**
 *_puts -> this is a funtion that puts
 *@str: a parameter to _puts funtions
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
