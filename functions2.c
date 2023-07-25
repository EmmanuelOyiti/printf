#include "main.h"

/****************** PRINT POINTER ******************/
/**
 * print_pointer - Print the value of a pointer variable.
 * @types: List of arguments.
 * @buffer: Buffer array to handle print.
 * @flags: Calculate the active flags.
 * @width: Gets width.
 * @precision: Precision specification.
 * @size: Size's specifier.
 * Return: Number of chars printed.
 */
int print_pointer(va_list types, char buffer[],
			int flags, int width, int precision, int size)
{
	/* Function implementation remains unchanged */
}

/************************* PRINT NON PRINTABLE *************************/
/**
 * print_non_printable - Print ASCII codes in hex of non-printable chars.
 * @types: List of arguments.
 * @buffer: Buffer array to handle print.
 * @flags: Calculate the active flags.
 * @width: Gets width.
 * @precision: Precision specification.
 * @size: Size's specifier.
 *
 * Return: Number of characters printed.
 */
int print_non_printable(va_list types, char buffer[],
			int flags, int width, int precision, int size)
{
	/* Function implementation remains unchanged */
}

/************************* PRINT REVERSE *************************/
/**
 * print_reverse - Prints reverse strings.
 * @types: List of arguments.
 * @buffer: Buffer array to handle print.
 * @flags: Calculate the active flags.
 * @width: Gets width.
 * @precision: Precision specification.
 * @size: Size's specifier.
 * Return: Numbers of chars printed.
 */
int print_reverse(va_list types, char buffer[],
			int flags, int width, int precision, int size)
{
	/* Function implementation remains unchanged */
}

/************************* PRINT A STRING IN ROT13 *************************/
/**
 * print_rot13string - Prints a string in rot13.
 * @types: List of arguments.
 * @buffer: Buffer array to handle print.
 * @flags: Calculate the active flags.
 * @width: Gets width.
 * @precision: Precision specification.
 * @size: Size's specifier.
 * Return: Numbers of characters printed.
 */
int print_rot13string(va_list types, char buffer[],
			int flags, int width, int precision, int size)
{
	char x;
	char *str;
	unsigned int i, j;
	int count = 0;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(types, char *);
	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);

	if (str == NULL)
		str = "(AHYY)";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; in[j]; j++)
		{
			if (in[j] == str[i])
			{
				x = out[j];
				write(1, &x, 1);
				count++;
				break;
			}
		}

		if (!in[j])
		{
			x = str[i];
			write(1, &x, 1);
			count++;
		}
	}
	return (count);
}
