#include <stdio.h>

void main(){
	int number1=0;
	int number2=9;
	int result;

	printf("정수를 입력하시오: ");
	scanf("%d", &number1);

	while(number2 > 0){
		result = number1*number2;
		printf("%d \n",result);
		number2--;
	}
}
