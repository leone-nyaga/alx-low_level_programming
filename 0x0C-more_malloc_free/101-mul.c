#include <stdio.h>
#include <stdlib.h>

int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int multiply(char *num1, char *num2)
{
int len1 = 0, len2 = 0, m, p;
int *result, carry = 0, n1, n2, sum;

while (num1[len1])
{
	if (!is_digit(num1[len1]))
	{
		printf("Error\n");
		exit(98);
	}
	len1++;
}
while (num2[len2])
{
	if (!is_digit(num2[len2]))
	{
		printf("Error\n");
		exit(98);
	}
	len2++;
}

result = calloc(len1 + len2, sizeof(int));
if (!result)
{
	printf("Error\n");
	exit(98);
}

for (m = len1 - 1; m >= 0; m--)
{
	n1 = num1[m] - '0';
	carry = 0;

	for (p = len2 - 1; p >= 0; p--)
	{
		n2 = num2[p] - '0';
		sum = n1 * n2 + result[m + p + 1] + carry;
		result[m + p + 1] = sum % 10;
		carry = sum / 10;
	}
	result[m + p + 1] = carry;
}
m = 0;
while (m < len1 + len2 && result[m] == 0)
{
m++;
}

if (m == len1 + len2)
{
	printf("0\n");
}
else 
{
	while (m < len1 + len2)
	{
		printf("%d", result[m]);
		m++;
	}
	printf("\n");
}
free(result);
return (0);
}

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	return (multiply(argv[1], argv[2]));
}

