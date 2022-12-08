#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	printf("size of a char is: %i byte(s)\n", sizeof(char));
	printf("size of an int is: %i byte(s)\n", sizeof(int));
	printf("size of a long int is: %i byte(s)\n", sizeof(long int));
	printf("size of a long long int is: %i byte(s)\n", sizeof(long long int));
	printf("size of a float is: %i byte(s)\n", sizeof(float));
	return (0);
}
