#include <stdio.h>
#pragma warning (disable:4996)

void find_odd(int* ptr, int size) {
	int i;

	printf("Ȧ�� ��� \n");
	for (i = 0; i < 10; i++) {
		if (ptr[i] % 2 != 0) {
			printf("%d ", ptr[i]);
		}
	}
}

void find_even(int* ptr, int size) {
	int i;
	printf("¦�� ��� \n");
	for (i = 0; i < 10; i++) {
		if (ptr[i] % 2 == 0) {
			printf("%d ", ptr[i]);
		}
	}
}

void main() {
	int arr[10];
	int i;

	printf("���� 10���� �Է��ϼ��� \n");

	for (i = 0; i < 10; i++) {
		printf("������ �Է��ϼ���: ");
		scanf("%d", &arr[i]);
	}
	printf("\n");
	find_odd(arr, sizeof(arr)/sizeof(int));
	printf("\n\n");
	find_even(arr, sizeof(arr)/sizeof(int));
	printf("\n");
}

