#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable: 4996)

void execute_dynamic() {
	int number_of_input;
	int* number_warehouse;
	int index;
	int total = 0;

	printf("��ü �Է� ������ �����ϼ���: ");
	scanf("%d", &number_of_input);

	number_warehouse = (int*)malloc(sizeof(int)) * number_of_input;

	for (index = 0; index < number_of_input; index++) {
		printf("%d] ���� �Է��ϼ���: ");
		scanf("%d", &input_number);
	}
}

void main(){

	int menu;

	while(1)
	puts("���� �޸� �Ҵ��� ü���սô�: ");
	puts ("1. ���� ����");
	puts ("2. ����");
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
