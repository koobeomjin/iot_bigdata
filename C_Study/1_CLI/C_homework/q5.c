#include<stdio.h>

void main(){
	int number1=0;
	int number2=0;
	int result;

	printf("��� ������ ����Ͻðڽ��ϱ�?: ");
	scanf("%d", &number1);

	while(number1 > 0){
		printf("������ �Է��ϼ���: \n");
		scanf("%d",&number2);
		--number1;
	}
}
