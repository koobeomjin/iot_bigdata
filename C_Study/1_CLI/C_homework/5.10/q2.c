#include <stdio.h>

void main(){
	int number1=0;
	int number2=3;

	printf("*\n");
	while(number1 < 4){
		number1++;
		while(number2 != 4){
			printf("O");
			number2++;
		}
		printf("*\n");
		number2 = number2-number1-1;
	}
}