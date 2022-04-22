#include <stdio.h>

/**
 * print_before_main - executes before main function
 * 
 */

/* Apply constructor attribute so that */
/* print_before_main() is exectued before main() */
void print_before_main(void) __attribute__ ((constructor));
void print_before_main(void)
{
printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
