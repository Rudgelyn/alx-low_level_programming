#include "main.h"
#include <unistd.h>
/**
 * _putchar - function that writes character c to stdout
 * @c: The character to print
 *
 * Return: 1 on success
 * -1 is returned on error, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
