#include "holberton.h"
/**
 * printstr - function prints a string
 * @s: string to be printed
 * Return: amount of characters printed
 */
int printstr(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (i - 1);
}
/**
 * printchar - functio that prints a character
 * @c: character to be printed
 * Return: 1 since one char was printed
 */
int printchar(char c)
{
	_putchar(c);
	return (1);
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


