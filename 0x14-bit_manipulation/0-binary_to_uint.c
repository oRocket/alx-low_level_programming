#include "main.h"
/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: The binary string to convert.
 *
 * Return: The converted number, or 0 if the string is invalid.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		result = result << 1; /* Left shift result by 1 */
		result += *b - '0'; /* Add the binary digit to result */

		b++; /* Move to the next character */
	}

	return (result);
}
