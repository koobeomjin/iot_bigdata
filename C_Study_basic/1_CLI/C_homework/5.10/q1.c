#include <stdio.h>

void main(){
	int number1=0;
	int number2=0;
	int number3=0;


	while(number2 < 5){
		printf("정수를 입력하세요: ");
		scanf("%d", &number1);

		while(number1 < 1){
			printf("1 이상의 정수를 입력하세요: ");
			scanf("%d", &number1);
		}
		number3=number1+number3;
		number2++;
	}
	printf("정수의 합은 %d 입니다.\n", number3);
}
