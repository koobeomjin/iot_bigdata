#include <stdio.h>

void main(){
	char sel;
	printf("M ����, A ����, E ����");
	printf("�Է�: ");
	scanf("%c", &sel);
	float my_pi;

	// switch���� ������ ������ ��Ī�� �Ǵ� case�� �̵��� �� ���� �̷������.
	// �׸��� Ư���� break�� ������ �ʴ� �̻� ������ ��� ��ɹ��� �����Ѵ�.
	// swith ()�� ������ �Ϲ������� ������(Integral) Ÿ���� ����ϴ� ���� ��Ģ�̴�.(���ڸ� ǥ���ϴ� char ����)
	switch(sel){
		case 'M': // if(sel == 'M' || sel == 'm')
		case 'm':
			printf("Morning\n");
			break;
		case 'A':
			printf("Good ");
		case 'a':
			printf("Afternoon\n");
			break;
		case 'E':
		case 'e':
			printf("Evening\n");
			break;
	}
// switch ()�� ������ �Ǽ����̱� ������ ������ ������ �߻��Ѵ�.
/*
	switch(my_pi){
		case 1.11:
			printf("1.11\n");
		case 3.14:
			printf("3.14\n");
			}
*/
}
