#include "main.h"

/**
 * _isalpha - checks is character is an alphabet
 * @c: character to check
 * Return: integer
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
