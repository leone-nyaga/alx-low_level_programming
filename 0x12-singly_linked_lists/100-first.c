#include <stdio.h>

/*
 * before_main - This function is executed before the main function
 * and prints a message
 */

void __attribute__ ((constructor)) before_main()

{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
