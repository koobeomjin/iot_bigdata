#include <stdio.h>

void main(){
	int world=7;
	int number=1;
	printf("World sector: %d\n",world);
	while(number<=50){ 							// �⺻ ���� : while ([���], [����], [ǥ����]){
		printf("Hello guest%d!\n",number);		// { �ڿ� ������ _____; <= ��ɹ�, ��ɾ� ���� >> Statement
		number++;								// { } ������ ��ɹ��� Statement Block�̶� �Ѵ�.
	}											// step1] while ������ ��ȣ���� ���, ����, ǥ������ ���Ѵ�.)
}												// step2] ���� ����� ��(1)�̸� ������ ����� 0�� �ƴ� ���̸�
												//	while ������ statement block�� �����Ѵ�.
												// 		  ����(0)�̸� statement block�� �������´�. 
												// step3] step2���� ���ΰ�� step1���� �̵��Ѵ�.
												// �Ұ�ȣ ( ) round bracket
												// �߰�ȣ { } brace
												// ���ȣ [ ] square bracket
												// ({[ <= opening, )}] <= closing
