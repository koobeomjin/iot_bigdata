#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable: 4996)

void execute_dynamic_malloc() {
	int number_of_input;
	int* number_warehouse;
	int index;
	int total = 0;

	printf("��ü �Է� ������ �����ϼ���: ");
	scanf("%d", &number_of_input);

	number_warehouse = (int*)malloc(sizeof(int) * number_of_input);

	for (index = 0; index < number_of_input; index++) {
		printf("%d] ���� �Է��ϼ���: ", index + 1);
		scanf("%d", &(number_warehouse)[index]);
	}
	for (index = 0; index < number_of_input; index++) {
		total = total + number_warehouse[index];
		printf("�Է�%d] %d", index + 1, number_warehouse[index]);
	}
	printf("����: %d\n", total);
	// number_warehouse�� ���� �޸� ��ȯ�� ���� �ʴ´ٸ� �Ҵ�Ǿ���
	// �޸𸮴� ���������� ������ �Ұ����� �޸� �������� ���´�.
	// �̷��� ������ memory leak�̶�� �Ѵ�.
	// ���� �Ҵ�� �޸𸮴� �ݵ�� ���α׷� ���� ���� free�ؾ��Ѵ�.
}

void main() {

	int menu;

	while (1) {
		puts("���� �޸� �Ҵ��� ü���սô�: ");
		puts("1. ���� ����");
		puts("2. ����");
		printf("�޴��� �����ϼ���: ");
		scanf("%d", &menu);

		switch (menu) {
		case 1:
			execute_dynamic_malloc();
			break;
		case 2:
			return;
		default:
			puts("1,2 �޴��� �����ϼ���.");
		}
	}
}
