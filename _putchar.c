#include <unistd.h>

/**
 * _putchar - function to return character to stdout
 *
 * @c: the character to print
 *
 * Return: on success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
