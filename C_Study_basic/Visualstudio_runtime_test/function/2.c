#include <stdio.h>
#pragma warning(disable:4996)

void CelToFah() {
	int cel = 0;
	int fah = 0;
	printf("���� �µ�: ");
	scanf("%d", &cel);
	fah = ((1.8 * cel) + 32);
	printf("ȭ�� : %d", fah);
}

void FahToCel() {
	int fah = 0;
	int cel = 0;
	printf("ȭ�� �µ�: ");
	scanf("%d", &fah);
	cel = ((fah-32)/1.8);
	printf("���� : %d", cel);
}

void main() {
	int choice = 0;

	printf("1.����, 2.ȭ�� : ");
	scanf("%d", &choice);

	if(choice == 1) {
		CelToFah();
	}
	else if(choice == 2){
		FahToCel();
	}
	else {
		printf("���α׷��� �����մϴ�.\n�������� 1 Ȥ�� 2�� �Է��ϼ���.");
	}
}