#include <stdio.h>

void main(){
	int number1=10;
	int number2;

	printf("number1 = %d\n", number1);
	//�ʱ�ȭ ���� ���� ������ ���� �Ϲ������� ������ ���� ����.
	//�����Ϸ� ����, ������ ���� ���������� 0���� �ʱ�ȭ �� ���� �ִ�.
	//������(garbage) ���� �޸� ��Ȳ�� ���� ������ ���� �Ҵ�ȴ�.
	//���� Visual Studio 2019�� �ʱ�ȭ ���� ���� ������ ����
	//0���� �ʱ�ȭ ���ش�.
	printf("number2 = %d\n", number2);
}