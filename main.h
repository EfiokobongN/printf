#ifndef our_printf
#define our_printf
#include <stdio.h>
#include <stdarg.h>
/**
 * specifier structs : specifier  structs
 * @valid: character valid.
 * @f: functions associated.
 *
 */
typedef struct specifier
{
	char *valid;
	int (*f)(va_list);
} spec;
int _printf(const char *format, ...);
int print_c(va_list args);
int print_s(va_list args);
void format_s(va_list valist, char *buffer, int *index);
int print_d(va_list args);
int print_i(va_list args);
int _putchar(char c);
int print_percent(va_list args);
int (*get_func(char x))(va_list args);
#endif
