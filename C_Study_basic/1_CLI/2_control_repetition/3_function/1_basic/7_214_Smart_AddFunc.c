#include <stdio.h>
// �ؼ�: �� ���α׷��� �Լ��� 4���� ������ �����Ͽ� ���α׷��� �ϼ��ϴ� ���� ������ �ξ���.
// ���������� �Լ��� ũ��� �Ϲ������� 50~100���� ������ �Ը� Ŀ���� ��쿡 �̸� �Լ�ȭ�Ѵ�.
// �ƴϸ� Ư�� ����� �����ϴ� ���� ��Ȯ�ϴٸ� ���� ���� ������ �Լ��� ���� �� �ִ�.
int Add(int num1, int num2){ 	// ���� : O, ��ȯ : �� O
	return num1+num2;
}

void ShowAddResult(int num){ 	// ���� : O, ��ȯ : �� X
	printf("������� ��� : %d \n", num);
}

int ReadNum(void){ 				// ���� : X, ��ȯ : �� O
	int num;
	scanf("%d", &num);
	return num;
}

void HowToUseThisProg(void){		// ���� : X, ��ȯ : �� X
	printf("== �Լ��� 4���� ������ ����� ���� ver1 == \n");
	printf("�� ���� ������ �Է��Ͻø� ��������� ��µ˴ϴ�. \n\n");
	printf("�� �׷� �� ���� ������ �Է��ϼ���: ");
}
void main(void){
	int result, num1, num2;
	HowToUseThisProg();
	num1=ReadNum();
	num2=ReadNum();
	result = Add(num1, num2);
	ShowAddResult(result);
	 
}
