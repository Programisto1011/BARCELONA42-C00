#include <unistd.h>

void ft_print_comb(void){
	
	int count_x = 0;
	int count_y = 0;
	int count_z = 0;

	while(count_x <10){
		char x = count_x +'0';
		count_y = count_x + 1;
		count_x ++;
		while(count_y <10){
			char y = count_y + '0';
			count_z = count_y + 1;
			count_y ++;
			while(count_z<10){
				char z = count_z + '0';
				char delimiter = ',';
				char a = ' ';
				write (1, &x, 1);
				write (1, &y, 1);
				write (1, &z, 1);
				count_z ++;
				if(!(x == '7' && y == '8' && z == '9')){
					write(1, &delimiter,1);
					write(1, &a, 1);
				}
			}
			
		}
	}
	return;
}
