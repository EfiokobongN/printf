#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <stddef.h>
/**
 * _printf - function that prints based on format specifier
 * @format: string with format specifier
 * Return: number  printed
 */
int _printf(const char *format, ...)
{
	if (format != NULL)
	{
		int count = 0, j;
		int (*m)(va_list);
		va_list args;

		va_start(args, format);
		j = 0;
		if (format[0] == '%' && format[1] == '\0')
			return (-1);
		while (format != NULL && format[j] != '\0')
		{
			if (format[j] == '%')
			{
				if (format[j + 1] == '%')
				{
					count += _putchar(format[j]);
					j += 2;
				}
				else
				{
					m = get_func(format[j + 1]);
					if (m)
						count += m(args);
					else
						count = _putchar(format[j]) + _putchar(format[j + 1]);
					j += 2;
				}
			}
			else
			{
				count += _putchar(format[j]);
				j++;
			}
		}
		va_end(args);
		return (count);
	}
	return (-1);
}
