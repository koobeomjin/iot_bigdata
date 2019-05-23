#include <stdio.h>

void main() {
	int arr[6] = { 1,2,3,4,5,6 };
	int* bptr = &arr[0];
	int* aptr = &arr[5];
	int temp, i;

	for (i = 0; i < 3;i++) {
		temp = *bptr;
		*bptr = *aptr;
		*aptr = temp;
		bptr = bptr+1;
		aptr = aptr-1;
	}
	printf("%d %d %d %d %d %d", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);
}