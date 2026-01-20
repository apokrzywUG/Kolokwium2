#include <stdio.h>

int recursive_series(int n, int krok){
	if(krok > 100){
		return -1;
	}
	if(n <= 1){
		return 1;
	} else if(n % 2 == 0){
		krok++;
		n = (n / 2) + 2;
		printf("Krok %d: %d\n", krok, n);
		return recursive_series(n, krok);
	} else {
		krok++;
		n = (n - 1) * 3;
		printf("Krok %d: %d\n", krok, n);
		return recursive_series(n, krok);
	}
}

int main(){
	int n, krok = 0;
	scanf("%d", &n);
	if(recursive_series(n, krok) == -1){
		printf("Przekroczono limit krokow\n");
		return 0;
	} else printf("%d", recursive_series(n, krok));
	return 0;
}