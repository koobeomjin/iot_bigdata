#include <stdio.h>

void main(){
	int number1;
	int	number2;
	int	number3;
	int result;

	printf("숫자 세개를 입력해주세요: ");
	scanf("%d %d %d", &number1, &number2, &number3);

	result = (number1-number2)*(number2+number3)*(number3%number1);
	printf("%d", result);
}
