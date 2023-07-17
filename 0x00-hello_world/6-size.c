#include <stdio.h>
/**
 * main - to print the size of  data types
 *
 * Return: always (0)
 *
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of a char: %lu 1byte(s)\n", sizeof(a));
	printf("size of an int: %lu 4byte(s)\n", sizeof(b));
	printf("size of a long int: %lu 8byte(s)\n", sizeof(c));
	printf("size of a long long int: %lu 8byte(s)\n", sizeof(d));
	printf("size of a float: %lu 4byte(s)\n", sizeof(e));
	return (0);
}
