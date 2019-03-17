#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h> 
typedef struct check
{	
	char * chk;
	void (*f)(va_list valist);
} check_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);
void p_char(va_list valist);
void p_int(va_list valist);
void p_float(va_list valist);
void p_string(va_list valist);
#endif
