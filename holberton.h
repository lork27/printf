#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int printchar(char c);
int printstr(char *s);
int caseselect(char mod, va_list list);
int val_mod(char modifier[], char index);
int printnum(int n, int counter);
#endif /*_HOLBERTON_H_*/
