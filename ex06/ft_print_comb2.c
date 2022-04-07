#include <unistd.h>

void i_print_number(int a){
	char b = a +'0';
	write(1, &b, 1);
}

void i_print (char a){
	write(1,&a,1);
}

void ft_print_comb2(void){
	int n = -1;
	char a = ' ';
	char delimiter = ',';
	
	while(n++ < 99){
		int m = n+1;
		
		while(m <100){
				
			int e_n = n/10;
			int r_n = n%10;
			int e_m = m/10;
			int r_m = m%10;

			m++;

			i_print_number(e_n);
			i_print_number(r_n);
			i_print(a);
			i_print_number(e_m);
			i_print_number(r_m);
			if(!(n == 98 && m == 100)){ 
				i_print(delimiter);
				i_print(a);
			}
						
		}

	}
}

