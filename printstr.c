#include "holberton.h"
/**
 * printstr - function prints a string
 * @s: string to be printed
 * @list: arguments from printf
 * Return: amount of characters
 */
int printstr(char *s, va_list list)
{
	int i;

	s = va_arg(list, char *);
	for (i = 0; i != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (i - 1);
}
