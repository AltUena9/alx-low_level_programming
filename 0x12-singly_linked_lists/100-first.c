#include <stdio.h>

void __attribute__((constructor)) game(void);
/**
 * game - applies constructor attribute
 */
void game(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
