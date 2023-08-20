#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_c -characters printed
 * @args: argument
 * Return: number of characters
 */
int print_c(va_list args)
{
	int c;

	c = va_arg(args, int);
	return (_putchar(c));
}
/**
 * print_s - string prints 
 * @args: argument
 * Return: number of characters
 */
int print_s(va_list args)
{
	int j, count = 0;
	char *str;

	j = 0;
	str = va_arg(args, char*);
	if (str == NULL)
		str = "(null)";
	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
		count++;
	}
	return (count);
}
/**
 * print_percent - percent pass look
 * @args: str  argument
 * Return: return the percent look
 *
 */
int print_percent(va_list args)
{
	char *str;

	str = "%";
	if (va_arg(args, int) == *str)
	{
		return (*str);
	}
	return (*str);
}

/**
 * print_d - prints a decimal
 * @args: deci argument
 * Return: counter
 */
int print_d(va_list args)
{

	unsigned int solution, lux, observed, count;
	int n;

	count = 0;
	n = va_arg(args, int);
		if (n < 0)
		{
			solution = (n * -1);
			count += _putchar('-');
		}
		else
			solution = n;

	lux = solution;
	observed = 1;
	while (lux > 9)
	{
		lux /= 10;
		observed *= 10;
	}
	while (observed >= 1)
	{
		count += _putchar(((solution / observed) % 10) + '0');
		observed /= 10;
	}
	return (count);
}
/**
 * print_i - prints integer
 * @args: integer argument
 * Return: decimal a function
 */

int print_i(va_list args)
{
	return (print_d(args));
}


