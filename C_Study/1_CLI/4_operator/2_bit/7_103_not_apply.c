#include <stdio.h>

void main(){
	int num;	    // 00000000 00000000 00000000 00000100
	printf("���� �Է�: ");
	scanf("%d", &num);
	num = ~num; 	// �ܼ��� ������ �����ϰ� �ܿ���

	num = num+1;
	printf("��ȣ�� �ٲ� ���: %d\n", num);




}
