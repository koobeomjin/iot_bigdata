#include <stdio.h>

void main(){
	int number1;
	int number2;

	printf("ù��° ���ڸ� �Է��ϼ���: ");
	scanf("%d", &number1);

	printf("�ι�° ���ڸ� �Է��ϼ���: ");
	scanf("%d", &number2);

	printf("�� : %d , ������ :%d", (number1/number2), (number1%number2));
}
