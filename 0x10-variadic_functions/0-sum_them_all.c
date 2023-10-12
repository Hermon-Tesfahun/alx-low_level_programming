#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A number of  variables of paramters to calculate the sum of.
 * Return: If n == 0 - 0.
 *else, the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list appp;
	unsigned int i, sum = 0;

	va_start(appp, n);

	for (i = 0; i < n; i++)
		sum += va_arg(appp, int);

	va_end(appp);

	return (sum);
}
