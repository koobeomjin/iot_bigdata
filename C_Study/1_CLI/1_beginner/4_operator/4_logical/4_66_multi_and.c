#include <stdio.h>
/* �� Multi And ����ǥ				 �� : 0�� �ƴ� ��
										���� : 0
	  					
 		A����			B����			C����			���

 		����			����			����			����

 		 ��				����			����			����

 		����			 ��				����			����

 		����			����			 ��	 			����

		 ��				 ��				����			����

		 ��				����			 ��				����

		����			 ��				 ��				����

		 ��				 ��				 ��				 ��

 */
void main(){
	int num1=10;
	int num2=12;
	int num3=15;
	int result;

	printf("num1: %d, num2: %d\n", num1, num2);

	// ���� && ���� && ����
	result = (num1 == 5 && num2 == 10 && num3 == 14);
	printf("num1 == 5 && num2 == 10 && num3 == 14 => �򰡰��: %d\n", result);

	// �� && ���� && ����
	result = (num1 == 10 && num2 == 10 && num3 == 14);
	printf("(num1 == 10 && num2 == 10 && num3 == 14) => �򰡰��: %d\n", result);

	// ���� && �� && ����
	result = (num1 == 5 && num2 == 12 && num3 == 14);
	printf("(num1 == 5 && num2 == 12 && num3 == 14) => �򰡰��: %d\n", result);

	// ���� && ���� && ��
	result = (num1 == 5 && num2 == 10 && num3 == 15);
	printf("(num1 == 5 && num2 == 10 && num3 == 15) => �򰡰��: %d\n", result);

	// �� && �� && ����
	result = (num1 == 10 && num2 == 12 && num3 == 14);
	printf("(num1 == 10 && num2 == 12 && num3 == 14) => �򰡰��: %d\n", result);

	// �� && ���� && ��
	result = (num1 == 10 && num2 == 10 && num3 == 15);
	printf("(num1 == 10 && num2 == 10 && num3 == 15) => �򰡰��: %d\n", result);

	// ���� && �� && ��
	result = (num1 == 5 && num2 == 12 && num3 == 15);
	printf("(num1 == 5 && num2 == 12 && num3 == 15) => �򰡰��: %d\n", result);

	// �� && �� && ��
	result = (num1 == 10 && num2 == 12 && num3 == 15);
	printf("(num1 == 10 && num2 == 12 && num3 == 15) => �򰡰��: %d\n", result);
}

