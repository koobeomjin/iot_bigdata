#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable: 4996)

void main(){
	int number_of_input;
	int* number_warehouse;
	int index;

	printf("��ü �Է� ������ �����ϼ���: ");
	scanf("%d", &number_of_input);

	number_warehouse = (int *)malloc(sizeof(int)) * number_of_input;

	for(index=0;index<number_of_input;index++){
		printf("%d] ���� �Է��ϼ���: ");
		scanf("%d", &input_number);
	}
}
