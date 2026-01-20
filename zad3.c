#include <stdio.h>

int text_processor(const char *str){

	int total = 0;
	int sign = 1;
	
	for(int i = 0; str[i] != '\0'; i++){
		
		char c = str[i];
		
		if (c >= 'A' && c <= 'Z') {
			total += (10 * sign);

		} else if (c >= '0' && c <= '9') {
			int digit = c - '0';
			sign = (digit % 2 == 0) ? 1 : -1;

		} else if (c == '!') {
			total = 0;
		}
	}
	return total;
}


int main(){
	char tekst[100];
	fgets(tekst, sizeof(tekst), stdin);
	printf("Wynik: %d\n", text_processor(tekst));
	return 0;
}