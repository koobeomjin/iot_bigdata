#include <stdio.h>
#pragma warning (disable:4996)

void findOdd(int* ptr, int arySize) {

	printf("Ȧ�� ���: ");

	int i;

	for (i = 0; i < arySize; i++) {

		if (ptr[i] % 2 != 0) {

			printf("%d ", ptr[i]);

		}

	}

	printf("\n");

	return;

}



void findEven(int* ptr, int arySize) {

	printf("¦�� ���: ");

	int i;

	for (i = 0; i < arySize; i++) {

		if (ptr[i] % 2 == 0)

			printf("%d ", ptr[i]);

	}

	printf("\n");

	return;

}



void main() {

	int ary[10];

	int len;

	printf("10���� ������ �Է��ϼ���. : ");

	for (int i = 0; i < 10; i++)

		scanf("%d", &ary[i]);



	printf("\n");

	len = sizeof(ary) / sizeof(int);



	findOdd(ary, len);

	findEven(ary, len);
}