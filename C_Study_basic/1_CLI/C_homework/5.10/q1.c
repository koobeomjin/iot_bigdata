#include <stdio.h>

void main(){
	int number1=0;
	int number2=0;
	int number3=0;


	while(number2 < 5){
		printf("������ �Է��ϼ���: ");
		scanf("%d", &number1);

		while(number1 < 1){
			printf("1 �̻��� ������ �Է��ϼ���: ");
			scanf("%d", &number1);
		}
		number3=number1+number3;
		number2++;
	}
	printf("������ ���� %d �Դϴ�.\n", number3);
}
