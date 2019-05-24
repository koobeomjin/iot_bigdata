#include <stdio.h>
#pragma warning (disable:4996)

void BubbleSort(int ary[], int len);

void main()
{
	int arr[7];
	int i;

	printf("정수 7개를 입력하세요: ");
	for (i = 0; i < 7; i++) {
	scanf("%d", &arr[i]);
}
	BubbleSort(arr, sizeof(arr) / sizeof(int));
	for (i = 0; i < 7; i++) {
		printf("%d", arr[i]);
	}
}

void BubbleSort(int ary[], int len) {
	int i, j;
	int temp;
	for (i = 0; i < len - 1; i++) {
		for (j = 0; j < (len - i) - 1; j++) {
			if (ary[j] < ary[j + 1]) {
				temp = ary[j];
				ary[j] = ary[j + 1];
				ary[j + 1] = temp;
			}
		}
	}
}
