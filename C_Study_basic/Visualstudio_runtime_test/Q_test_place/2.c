#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int num1 = 0;
	int num2 = 0;
	int result = 0;

	printf("�� ���� ������ �Է��ϼ���: ");
	scanf("%d %d", &num1, &num2);

	if (num2 > num1) {
		result = num2 - num1;
		printf("�� ���� �� : %d", result);
	}
	else {
		result = num1 - num2;
		printf("�� ���� �� : %d", result);
	}
}