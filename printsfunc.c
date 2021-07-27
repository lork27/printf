#include "holberton.h"
/**
 * printstr - function prints a string
 * @s: string to be printed
 * Return: amount of characters printed
 */
int printstr(char *s)
{
	int i;

	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (i);
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
 *printnum - prints number with putchar using recursion
 *@i: number to be printed
 *@counter: int we are using to keep track the number of numbers printed
 *Return: counter
 */
int printnum(int n, int counter)
{
	counter = 0;
	if (n < 0)
	{
		_putchar('-');
		n = -n;
		counter++;
	}
	if (n / 10)
	{
		printnum(n / 10, counter++);
	}
	_putchar(n % 10 + '0');
	counter++;
	return (counter);
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


