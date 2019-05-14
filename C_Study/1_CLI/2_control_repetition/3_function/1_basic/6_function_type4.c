#include <stdio.h>
// 함수 유형 4
// 반환 타입 o 인자 o case
// 장점: 함수는 함수의 고유한 알고리즘에 가장 집중할 수 있는 구조이다.
// 단점:
int my_add(int input_number1, int input_number2){
	int operation_result;

	printf("두 수를 입력하세요: ");
	scanf("%d %d", &input_number1, &input_number2);

	printf("\n- 간단한 덧셈 연산 ver1\n");
	printf("첫 번째 입력: %d\n", input_number1);
	printf("두 번째 입력: %d\n", input_number2);

	operation_result = input_number1 + input_number2;
	printf("%d + %d = ", input_number1, input_number2);

	return operation_result;
}

void main(){
	int number1;
	int number2;
	int result;
	printf("두 수를 입력하세요: ");
	scanf("%d %d",&number1, &number2);

	result = my_add(number1, number2);
	printf("%d\n", result);
}
