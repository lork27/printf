#include "holberton.h"
/**
 * printchar - functio that prints a character
 * @c: character to be printed
 * @list: arguments from printf
 * Return: character
 */
int printchar(char c, va_list list)
{
	c = va_arg(list, int);
	_putchar(c);
	return (1);
}
