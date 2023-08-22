#include "main.h"

/**
 * binary_fmt - specifier "b"
 * @buffer: Pointer to  buffer
 * @args: the integer to lowercase hex
 *
 * Return: Pointer to thebuffer.
 */
mk_buffer binary_fmt(mk_buffer buffer, va_list args)
{
	int j, len, temp;
	unsigned int num;
	int binary_arr[1000];

	num = va_arg(args, unsigned int);

	len = 0;
	while (num > 0)
	{
		temp = 0;
		temp = num % 2;
		binary_arr[len] = temp + 48;
		num /= 2;
		len++;
	}

	j = len - 1;
	while (j >= 0)
	{
		*buffer.box = binary_arr[j];
		buffer.box++;
		buffer.size++;
		j--;
	}

	buffer.box--;
	return (buffer);
}
