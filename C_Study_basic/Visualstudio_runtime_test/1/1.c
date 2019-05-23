#include <stdio.h>
#pragma warning (disable:4996)

void find_odd(int* ptr, int size) {
	int i;

	printf("홀수 출력 \n");
	for (i = 0; i < 10; i++) {
		if (ptr[i] % 2 != 0) {
			printf("%d ", ptr[i]);
		}
	}
}

void find_even(int* ptr, int size) {
	int i;
	printf("짝수 출력 \n");
	for (i = 0; i < 10; i++) {
		if (ptr[i] % 2 == 0) {
			printf("%d ", ptr[i]);
		}
	}
}

void main() {
	int arr[10];
	int i;

	printf("정수 10개를 입력하세요 \n");

	for (i = 0; i < 10; i++) {
		printf("정수를 입력하세요: ");
		scanf("%d", &arr[i]);
	}
	printf("\n");
	find_odd(arr, sizeof(arr)/sizeof(int));
	printf("\n\n");
	find_even(arr, sizeof(arr)/sizeof(int));
	printf("\n");
}

