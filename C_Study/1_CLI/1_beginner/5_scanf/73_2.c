#include <stdio.h>

void main(){
	
	int input_number;
	int num1, num2, num3;

	printf("숫자를 입력하세요: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	printf("%d * %d + %d = %d\n", num1, num2, num3, (num1*num2)+num3);
}
