#include <stdio.h>
/**
 * main - main
 *
 * Return: 0
 */
int main(void)
{

int intType;
float floatType;
double doubleType;
char charType;

printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of float: %zu bytes\n", sizeof(floatType));
printf("Size of int: %zu bytes\n", sizeof(longintType));
printf("Size of char: %zu bytes\n", sizeof(charType));
printf("size of int: %zu bytes\n", sizeof(longlongintType));
return (0);
}
