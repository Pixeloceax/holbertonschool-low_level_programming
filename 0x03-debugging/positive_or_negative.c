#include "main.h"

/**
* positive_or_negative - positive or negative
*
* @i: int
*
* Return: 0
*/

void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
}
