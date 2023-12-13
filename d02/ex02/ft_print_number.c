#include <stdio.h>

void ft_putchar(void){

	char nums[] = "0123456789";
	int index = 0;

	while(index <= 9){
		putchar(nums[index]);
		index++;
	}
}

