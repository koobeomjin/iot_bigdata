#include <stdio.h>
#pragma warning (disable:4996)

int high_num(int num1, int num2, int num3) {
	if (num1 > num2 && num1 > num3) {
		printf("�ִ� : %d", num1);
	}
	else if (num2 > num1 && num2 > num3) {
		printf("�ִ� : %d", num2);
	}
	else {
		printf("�ִ� : %d", num3);
	}
}

int low_num(int num1, int num2, int num3) {
	if (num1 < num2 && num1 < num3) {
		printf("�ּڰ� : %d", num1);
	}
	else if (num2 < num1 && num2 < num3) {
		printf("�ּڰ� : %d", num2);
	}
	else {
		printf("�ּڰ� : %d", num3);
	}
}

void main() {
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	printf("3���� ������ �Է��ϼ���: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	high_num(num1, num2, num3);
	printf("\n");
	low_num(num1, num2, num3);
}