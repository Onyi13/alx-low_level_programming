#include <stdio.h>
/**
* premain - Prints statements before main executes.
*/
__attribute__((constructor))
void premain()
{printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n"); }
