#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int arr[10];
	int* odd_ptr=&arr[0];
	int* even_ptr = &arr[9];
	int i, a;

	printf("정수 10개를 입력하세요: \n");

	for (i = 0; i < 10; i++) {
		printf("입력: ");
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