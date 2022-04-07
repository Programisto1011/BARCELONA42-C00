#include <unistd.h>

void ft_print_reverse_alphabet(void){
	
	int count = 0;
	char letter = 'z';

	while(count <=25){
		char l = letter - count;
		write(1, &l, 1);
		count ++;
	}
	return;
}

