#include <stdio.h>
// �Լ� ���� 4
// ��ȯ Ÿ�� o ���� o case
// ����: �Լ��� �Լ��� ������ �˰��� ���� ������ �� �ִ� �����̴�.
// ����:
int my_add(int input_number1, int input_number2){
	int operation_result;

	printf("�� ���� �Է��ϼ���: ");
	scanf("%d %d", &input_number1, &input_number2);

	printf("\n- ������ ���� ���� ver1\n");
	printf("ù ��° �Է�: %d\n", input_number1);
	printf("�� ��° �Է�: %d\n", input_number2);

	operation_result = input_number1 + input_number2;
	printf("%d + %d = ", input_number1, input_number2);

	return operation_result;
}

void main(){
	int number1;
	int number2;
	int result;
	printf("�� ���� �Է��ϼ���: ");
	scanf("%d %d",&number1, &number2);

	result = my_add(number1, number2);
	printf("%d\n", result);
}
