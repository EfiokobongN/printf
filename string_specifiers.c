#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * format_s - specificer s function
 * @valist: valist function
 * @buffer: buffer function
 * @index: index function
 *
 * Return: void
 */
void format_s(va_list valist, char *buffer, int *index)
{
	int i, j;
	char *s;

	s = va_arg(valist, char*);
	if (s == NULL)
		s = "(null)";
	for (i = *index, j = 0; s[j] != '\0';  *index += 1, i++, j++)
	{
		if (*index == 1024)
		{
			_write_buffer(buffer, index);
			reset_buffer(buffer);
			*index = 0;
		}
		buffer[*index] = s[j];
	}
}
/**
 * format_s - specificer c function
 * @valist: valist function
 * @buffer: buffer function
 * @index: index function
 *
 * Return: void
 */
void format_c(va_list valist, char *buffer, int *index)
{
	char s;

	s = va_arg(valist, int);
	if (*index == 1024)
	{
		_write_buffer(buffer, index);
		reset_buffer(buffer);
		*index = 0;
	}
	buffer[*index] = s;
	*index += 1;
}
