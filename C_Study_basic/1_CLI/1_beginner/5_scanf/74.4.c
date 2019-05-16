#include <stdio.h>

void main(){
	int number1;
	int number2;

	printf("첫번째 숫자를 입력하세요: ");
	scanf("%d", &number1);

	printf("두번째 숫자를 입력하세요: ");
	scanf("%d", &number2);

	printf("몫 : %d , 나머지 :%d", (number1/number2), (number1%number2));
}
