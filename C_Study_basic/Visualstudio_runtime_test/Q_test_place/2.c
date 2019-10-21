#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int num1 = 0;
	int num2 = 0;
	int result = 0;

	printf("두 개의 정수를 입력하세요: ");
	scanf("%d %d", &num1, &num2);

	if (num2 > num1) {
		result = num2 - num1;
		printf("두 수의 차 : %d", result);
	}
	else {
		result = num1 - num2;
		printf("두 수의 차 : %d", result);
	}
}