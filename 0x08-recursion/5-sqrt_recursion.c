#include "main.h"
/**
 * sqtRecursive - oui
 * @A: A
 * @B: B
 * @C: C
 * Return: 1
 **/
int sqtRecursive(int A, int B, int C)
{
	long mid;

	if (B >= A)
	{
		mid = A + (B - A) / 2;
		if (mid * mid == C)
			return (mid);
		if (mid * mid > C)
			return (sqtRecursive(A, mid - 1, C));
		if (mid * mid < C)
			return (sqtRecursive(mid + 1, B, C));
	}
	return (-1);
}
/**
 * _sqrt_recursion - oui
 * @n: n
 * Return: -1
 **/
	int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqtRecursive(2, n, n));
}
