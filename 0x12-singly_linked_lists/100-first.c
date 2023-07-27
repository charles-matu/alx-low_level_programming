#include <stdio.h>

/**
 * myStartupFun - Constructor function executed before main().
 */
void myStartupFun(void) __attribute__ ((constructor));

/**
 * myStartupFun - Implementation of myStartupFun.
 */
void myStartupFun(void)
{
	/* Print the first line */
	printf("You're beat! and yet, you must allow,\n");

	/* Print the second line */
	printf("I bore my house upon my back!\n");
}

