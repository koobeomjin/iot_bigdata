#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable: 4996)

void main() {
	int number_of_input;
	int* number_warehouse;
	int index;
	int total = 0;

	printf("��ü �Է� ������ �����ϼ���: ");
	scanf("%d", &number_of_input);

	number_warehouse = (int*)malloc(sizeof(int) * number_of_input);

	for (index = 0; index < number_of_input; index++) {
		printf("%d] ���� �Է��ϼ���: ", index+1);
		scanf("%d", &(number_warehouse)[index]);
	}
	for (index = 0; index < number_of_input; index++) {
		total = total + number_warehouse[index];
		printf("�Է�%d] %d", index+1, number_warehouse[index]);
	}
	printf("����: %d", total);

	free(number_warehouse);
}