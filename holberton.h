#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#include <unistd.h>
/**
 * _printf - function to print
 * @format: parameter
 * Return: 0
 */
// int _printf(const char *format, ...);
int _putchar(char c);
int printchar(char c, va_list);
int printstr(char *s, va_list);
int caseselect(char mod, va_list list);
#endif /*_HOLBERTON_H_*/
