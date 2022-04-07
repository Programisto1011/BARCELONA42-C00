#include <unistd.h>

void i_print_number_x (int x){
	char l = x + '0';
	write (1, &l, 1);
}

int i_pow (int num, int exp)
{
	int result = num;
	while (exp >1)
	{
		result = result * num;
		exp--;
	}
	return result;
}

int count_units (int n){
	
	int c = 1 ;
	int x = n/ i_pow(10,c);

	while(x != 0){
		x = x/ i_pow(10,c);		
		c++;	
	}
	return c;
}

void ft_putnbr (int nb){
	int c = count_units(nb);
	int x = nb;
	if(nb<0){
		char s = '-';
		write(1, &s, 1);
		x = -1 * x;
	}
	while(c>0){
		int u = (x - x % i_pow(10,c-1))/i_pow(10,c-1);
		x = x - (u * i_pow(10, c-1));
		c--;
		if(u != 0){
			i_print_number_x(u);
		}
		else{
			i_print_number_x(x);
		}
	}
}

int main(){
	ft_putnbr(-99324903);
}

