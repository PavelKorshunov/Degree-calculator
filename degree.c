#include "stdio.h"

int main()
{

	int degree, result;

	printf("Enter the degree ");

	scanf("%d", &degree);
	result = (degree * 1.8) + 32;
	printf("Degrees Fahrenheit %d\n", result);
}