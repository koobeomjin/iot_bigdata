#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int arr[10];
	int* odd_ptr=&arr[0];
	int* even_ptr = &arr[9];
	int i, a;

	printf("���� 10���� �Է��ϼ���: \n");

	for (i = 0; i < 10; i++) {
		printf("�Է�: ");
		scanf("%d", &a);
		if (a % 2 != 0) {
			*odd_ptr = a;
			odd_ptr++;
		}
		if (a % 2 == 0) {
			*even_ptr = a;
			even_ptr--;
		}
	}
	for (i=0;i<10;i++)
		printf("%d ", arr[i]);
}