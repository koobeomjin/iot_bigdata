#include <stdio.h>
#pragma warning (disable:4996)

void is_palindrome(char* arr, int size) {
	int i;

	for (i = 0; i < size / 2; i++) {
		if (arr[i] == arr[size - i - 1]) {
		}
		else {
		printf("ȸ���� �ƴմϴ�.");
		return;
		}
	}
	printf("ȸ���Դϴ�.");
}

void main() {
	char arr[100];
	int counter = 0;

	printf("���ڿ��� �Է��ϼ���: ");
	scanf("%s", arr);

	while (arr[counter] != '\0') {
		counter++;
	}
	is_palindrome(arr, counter);
}