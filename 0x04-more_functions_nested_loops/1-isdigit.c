#include "main.h"

/**
 * _isdigit - check if character is a digit
 * @c: char to be checked
 * return: 1 for a charachter that will be digit or 0 for any else
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
	return (1);
	}
	return (0);
}
