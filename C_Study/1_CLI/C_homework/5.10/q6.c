#include <stdio.h>

void main(){
	int number1=0;
	int number2=0;
	int total=0;

	printf("�ΰ��� ������ �Է��ϼ���: ");
	scanf("%d %d", &number1, &number2);

	for(number1; number1 < number1+1; number1++){
		for(number2; number1 < number2; number2++){
		total+=number2;
		}
	}
	printf("%d ���� %d ������ �������: %d \n", number1, number2, total);
}
