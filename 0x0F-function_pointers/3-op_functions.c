#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - function that returns sum of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that returns difference of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op-mul - function that find product two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - funstion that divides two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: division of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - fuction that returns remainder of division of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: remainder of division of two numbers
 */

int op_mod(int a, int b)
{
	return (a % b);
}
