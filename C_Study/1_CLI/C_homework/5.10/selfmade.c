#include <stdio.h>

void main(){
	int num1=0;
	int limit=0;
	int result=0;

	printf("1 �̻��� ���� 5���� �Է��ϼ���: \n");

	while(limit < 5){
		printf("������ �Է��ϼ���: ");
		scanf("%d", &num1);
		limit++;
		while(num1 < 1){
			printf("1 �̻��� ������ �Է��ϼ���: ");
			scanf("%d", &num1);
		}
	result = (num1+result);
	}
	printf("�Է��Ͻ� ������ �� ���� %d�Դϴ�.\n", result);
}
