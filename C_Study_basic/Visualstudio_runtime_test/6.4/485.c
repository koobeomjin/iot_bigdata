#include <stdio.h>
#pragma warning (disable : 4996)

typedef struct person {
	char name[20];
	char phoneNum[20];
	int age;
} Person;

void ShowPersonInfo(Person man) {
	printf("name : %s \n", man.name);
	printf("phone : %s \n", man.phoneNum);
	printf("age : %d \n", man.age);
}
// �Լ��� �⺻������ �Ѱ��� ���� ���� �� �� �ִ�.
// ������ �Ʒ��� ���� ����ü�� ����Ѵٸ� ����ü�� ����� Ȱ���Ͽ�
// �������� �ΰ� �̻��� ���� ���Ͽ� ������ �����ϴ�.
Person ReadPersonInfo() {
	Person man;
	printf("name? "); scanf("%s", man.name);
	printf("phone? "); scanf("%s", man.phoneNum);
	printf("age? "); scanf("%s", &man.age);
	return man;
}

void main() {
	// ����ü�� ���ؼ��� ���� struct ���� ���Ͽ� C���� �����ϴ� ���
	// �⺻���� ���� ���� ������ �����ϰ� �ִ�.
	Person man = ReadPersonInfo();
	ShowPersonInfo(man);
}