#include <stdio.h>
#pragma warning (disable:4996)

void findOdd(int* ptr, int arySize) {

	printf("홀수 출력: ");

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

	printf("짝수 출력: ");

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

	printf("10개의 정수를 입력하세요. : ");

	for (int i = 0; i < 10; i++)

		scanf("%d", &ary[i]);



	printf("\n");

	len = sizeof(ary) / sizeof(int);



	findOdd(ary, len);

	findEven(ary, len);
}