#include "holberton.h"
#include <stdio.h>
/**
 *_printf - function that emulates printf behaviour
 *@format: string we pass to print and look for extra argurments
 *Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int i, sum = 0;
	va_list list;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(list, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			sum += caseselect(format[i + 1], list);
			i++;
		}
		else
		{
			_putchar(format[i]);
			sum++;
		}
	}
	va_end(list);
	return (sum);
}

