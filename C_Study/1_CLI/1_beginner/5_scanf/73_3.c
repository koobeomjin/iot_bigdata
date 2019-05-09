#include <stdio.h>

void main(){
	int number1;
	int result;

	printf("숫자를 입력하세요: ");
	scanf("%d", &number1);

	result = number1*number1;
	printf("%d^2 = %d", number1, result);
}
