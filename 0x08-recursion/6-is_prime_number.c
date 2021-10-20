#include "main.h"
/**
 * sqtRecursive - oui
 * @n: n
 * @m: n
 * Return: 1
 **/
int sqtRecursive(int n, int m)
{
	if (n <= 0)
		return (-1);
	if (n * n == m)
		return (n);
	return (sqtRecursive(n - 1, m));
}
/**
 * _sqrt_recursion - oui
 * @n: n
 * Return: -1
 **/
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	return (sqtRecursive(n / 2, n));
}
/**
 * is_prime_number - oui
 * @n: n
 * Return: 1 ou 0
 **/
int is_prime_number(int n)
{
	if (n <= 1 || _sqrt_recursion(n) >= 1)
		return (0);
	if (_sqrt_recursion(n) == -1)
		return (1);
	return (_sqrt_recursion(n));
}
