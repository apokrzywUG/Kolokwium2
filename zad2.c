#include <stdio.h>

int recursive_series(int n){
	if(n == 1 || n < 1){
		return printf("%d", 1);
	} else if(n % 2 == 0){
		return printf("%d", (n / 2) + 2);
	} else return printf("%d", (n - 1) * 3);
}

int main(){
	int n;
	scanf("%d", &n);
	recursive_series(n);
	return 0;
}