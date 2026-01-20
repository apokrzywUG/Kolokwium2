#include <stdio.h>

int process_number(int n){
	int krok = 0;
	if( n < 0 ){
		return krok;
	}
	
	while (n > 1 && krok < 100){
		int a = n % 3;
		if(a == 0){
			n = n / 3;
			printf("Reszta 0: %d\n", n);
		} else if(a == 1){
			n = n + 5;
			printf("Reszta 1: %d\n", n);
		} else if(a == 2){
			n = n - 1;
			printf("Reszta 2: %d\n", n);
		} else return 1; 
		krok++;
	}
	return krok;
}

int main(){
	int n;
	scanf("%d", &n);
	printf("krokow: %d\n", process_number(n));
	return 0;
}