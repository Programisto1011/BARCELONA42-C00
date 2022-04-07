#include <unistd.h>

void ft_print_alphabet(void){

	int count = 0;
	char letter = 'a';
	
	while(count <= 25)
	{
		char l = letter + count;
		write(1, &l, 1);
		count ++;
	} 
}


