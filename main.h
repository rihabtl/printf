#ifndef _MAIN_H_
#define _MAIN_H_
#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>

int _putchar(char c);
void handle_format(va_list, char specifier, int *counter);
int _printf(const char *format, ...);
int put_string(const char *str);

#endif