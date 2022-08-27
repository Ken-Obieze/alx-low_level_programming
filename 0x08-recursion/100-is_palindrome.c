#include "main.h"

/**
 * _strlen_recursion - returns length of string
 * @s: string to return is length
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
        if (*s == '\0')
                return (0);
        return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - checks if a string is palindrome
 * @s: string to check
 * Return: 1 if stringis palindrome, alse 0
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check(s, 0, _strlen_recursion(s)));
}

/**
 * check - checks palindrome
 * @s: string check
 * @i: iterator
 * @len: lenght of string
 * Return: 1 if palindrome else 0
 */

int check(char *s, int i, int len)
{
	if (*(s + i) != *(s + len -1))
		return (0);
	if (i >= len)
		return(1);
	return (check(s, i + 1, len - 1));
}
