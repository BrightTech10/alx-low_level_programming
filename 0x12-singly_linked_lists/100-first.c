#include "lists.h"

/**
 * print_before_main - executes before main function
 */

/* Apply constructor attribute so that */
/* print_before_main() is exectued before main() */
__attribute__ ((constructor))
void print_before_main(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
