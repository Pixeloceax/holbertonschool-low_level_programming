#include <stdio.h>
/**
 * main - main
 *
 * Return: 0
 */
int main(void)
{

int intType;
long long int intType;
long int intTYpe;
float floatType;
char charType;

printf("Size of int: %zu byte(s)\n", sizeof(intType));
printf("Size of float: %zu byte(s)\n", sizeof(floatType));
printf("Size of long int: %zu byte(s)\n", sizeof(longintType));
printf("Size of char: %zu byte(s)\n", sizeof(charType));
printf("size of long long int: %zu byte(s)\n", sizeof(longlongintType));
return (0);
}
