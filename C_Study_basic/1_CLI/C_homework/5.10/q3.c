#include <stdio.h>

void main(){
	int total=0;
	int input_num=0;
		
	printf("�ƹ��� ���� �Է��ϼ���: ");
	scanf("%d", &input_num);
	do{
		total = total + input_num;
		printf("���� �Է�(0 to quit): ");
		scanf("%d", &input_num);
		}while(input_num > 0);
		printf("�հ�: %d \n", total);
}
