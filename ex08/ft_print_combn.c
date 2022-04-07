#include <unistd.h>

void i_print_number_x (int x){
        char l = x + '0';
        write (1, &l, 1);
}

void i_print_arr (int arr[], int dimension){
	int c = 0;
	while(c<dimension){
		i_print_number_x(arr[c]);
		c++;
	}
}
               
void ft_print_combn(int n){
		
		int arr[n];
		int delimiter = ',';
		int space = ' ';
		int c = 0;
		while(c<n){
			arr[c] = c;
			i_print_number_x(arr[c]);
			c++;
		}
		write(1, &delimiter,1);
		write(1, &space,1);
		c = n;
		int counter = 0;
		while(c > 0){
			c--;
			int value = c+1;
			counter ++;
			while(value<=10-counter){
				arr[c]= value;  
				value++;
				i_print_arr(arr,n);
				if(value != 11-counter){
					write(1,&delimiter,1);
					write(1,&space,1);
				}
		  	}
			if(c!=0){
				write(1,&delimiter,1);
				write(1,&space,1);
			}	
		};
}

int main (){
	int d = 5;
	ft_print_combn(5);
 	return 0;
}
