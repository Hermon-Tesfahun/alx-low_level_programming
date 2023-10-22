#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @a: number of arguments
 * @b: array of arguments
 *
 * Return: the product of a and b
 */

int multiply_numbers(int a, int b)
	{
		return a * b;
	}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[]) {
       if (argc != 3)
	{
		printf("Error\n");
		return 1;
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	if (num1 == 0 && argv[1][0] != '0')
	{
		printf("Error: Invalid input for the first number\n");
		return 1;
	}

	if (num2 == 0 && argv[2][0] != '0')
	{
		printf("Error: Invalid input for the second number\n");
		return 1;
	}

	int result = multiply_numbers(num1, num2);
	printf("%d\n", result);

	return 0;
}
