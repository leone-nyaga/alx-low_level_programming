#include <stdio.h>

/**
 * add - Adds two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The result of the addition.
 */
int add(int a, int b)
{
return (a + b);
}

/**
 * sub - Subtracts two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The result of the subtraction.
 */
int sub(int a, int b)
{
return (a - b);
}

/**
 * mul - Multiplies two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The result of the multiplication.
 */
int mul(int a, int b)
{
return (a * b);
}

/**
 * div - Divides two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The result of the division, or 0 if division by zero.
 */
int div(int a, int b)
{
if (b == 0)
{
printf("Error: Division by zero\n");
return (0);
}
return (a / b);
}

/**
 * mod - Calculates the modulo of two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The result of the modulo operation, or 0 if division by zero.
 */
int mod(int a, int b)
{
if (b == 0)
{
printf("Error: Division by zero\n");
return (0);
}
return (a % b);
}

