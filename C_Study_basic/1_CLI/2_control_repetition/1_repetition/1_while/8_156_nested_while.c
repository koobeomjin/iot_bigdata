#include <stdio.h>
// ��ø�� (Nested) while��
void main(){
	int current_times = 2;
	int multiplier=0;

	/*
		 * 2 4 6 8 10 12 14 16 18
		 * .
		 * . 
		 * . 
		 * 9 . . . . . . . . . .81
		 * �������� �����͸� table ���·� ǥ���� �ڷᱸ���� ����.
		 * �̷��� ������ ������ 2�� �ݺ������� �����ϴ� ���� ���� ȿ�����̴�.
		 * ù��° while���� �������� ������ table�� ���� �����ϴ� ���̸�
		 * �ι�° while���� �������� ������ table�� ���� �����ϴ� �����̴�.
		 */

		printf("\n�������� ����!\n\n");
		while(current_times<10){
			multiplier=1; // �� ���� �����ϴ� ������ �ʱ�ȭ

			printf("==== %d�� ===== \n\n", current_times);
			while(multiplier<10){
				printf("%d * %d = %d \n", current_times, multiplier, current_times*multiplier);
				multiplier++; // ���� ���� �����ϱ� ���� ������ ����
			}
			printf("\n");		
			current_times++; // ���� ���� �����ϱ� ���� ���� ����
		}
}
