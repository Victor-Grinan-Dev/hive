#include <stdio.h>

void ft_putchar(void){
	int index = 25;
	char str[] ="abcdefghijklmnopqrstuvwxyz";

	while (index >= 0)
	{
		putchar(str[index]);
		index--;
	}
}

