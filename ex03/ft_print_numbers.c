#include <unistd.h>

void ft_print_numbers(void){
	int count = 0;
	while(count < 10)
	{
		char digit = count + '0';
		write(1,&digit, 1);
		count++;
	}
	return;
}


