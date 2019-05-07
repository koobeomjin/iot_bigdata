#include <stdio.h>

void main(){
	int input_number1;
	int input_number2;
	int result;

	printf("첫번째 숫자를 입력하세요: ");
	scanf("%d", &input_number1);

	printf("두번째 숫자를 입력하세요: ");
	scanf("%d", &input_number2);

	result = input_number1+input_number2;
	printf("%d+%d=%d\n", input_number1, input_number2, input_number1+input_number2);

	result = input_number1-input_number2;
	printf("%d-%d=%d\n", input_number1, input_number2, input_number1-input_number2);
	
	result = input_number1*input_number2;
	printf("%d*%d=%d\n", input_number1, input_number2, input_number1*input_number2);
	
	result = input_number1/input_number2;
	printf("%d/%d=%d\n", input_number1, input_number2, input_number1/input_number2);
	
	result = input_number1%input_number2;
	printf("%d%%%d=%d\n", input_number1, input_number2, input_number1%input_number2);

}
