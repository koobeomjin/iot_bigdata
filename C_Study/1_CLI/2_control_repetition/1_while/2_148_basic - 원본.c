#include <stdio.h>

void main(){
	int number=0;
	while(number<50){ 					// �⺻ ���� : while ([���], [����], [ǥ����]){
		printf("Hello world!\n");		// { �ڿ� ������ _____; <= ��ɹ�, ��ɾ� ���� >> Statement
										// { } ������ ��ɹ��� Statement Block�̶� �Ѵ�.
										// step1] while ������ ��ȣ���� ���, ����, ǥ������ ���Ѵ�.)
		number++;						// step2] ���� ����� ��(1)�̸� ������ ����� 0�� �ƴ� ���̸�
										//	while ������ statement block�� �����Ѵ�.
	}									// 		  ����(0)�̸� statement block�� �������´�. 
}										// step3] step2���� ���ΰ�� step1���� �̵��Ѵ�.
										// �Ұ�ȣ ( ) round bracket
										// �߰�ȣ { } brace
										// ���ȣ [ ] square bracket
										// ({[ <= opening, )}] <= closing
