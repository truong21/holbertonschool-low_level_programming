#include "holberton.h"
int pal_checker(char *s, int start, int end);
int _strlen_recursion(char *s);
/**
 * is_palindrome - analyze if string is a palindrome
 * @s: string
 * Return: 1 if palindrome; 0 otherwise
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (*s == '\0')
		return (1);
	else
		return (pal_checker(s, 0, len - 1));
}
/**
 * pal_checker - analyze if prime number is divisible by i
 * @s: string
 * @start: start index of string
 * @end: end index of string
 * Return: 1 if string is palindrome; 0 otherwise
 */
int pal_checker(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (pal_checker(s, start + 1, end - 1));
}
/**
 * _strlen_recursion - the length of a string
 * @s: string
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
