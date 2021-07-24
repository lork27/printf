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
int _printf(const char *format, ...);
int _putchar(char c);
int caseselect(char mod, va_list list);
#endif /*_HOLBERTON_H_*/
