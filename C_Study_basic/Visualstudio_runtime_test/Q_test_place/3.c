#include <stdio.h>
# pragma warning (disable:4996)

void main() {
	int kscore = 0;
	int escore = 0;
	int mscore = 0;
	int average = 0;

	printf("�л��� ���� ���� ���� ������ �Է��ϼ���: ");
	scanf("%d %d %d", &kscore, &escore, &mscore);
	average = (kscore + escore + mscore)/3;

	if (average >= 90) {
		printf("�л��� ������ A�Դϴ�.");
	}
	else if(average >= 80) {
		printf("�л��� ������ B�Դϴ�.");
	}
	else if (average >= 70) {
		printf("�л��� ������ C�Դϴ�.");
	}
	else if (average >= 50) {
		printf("�л��� ������ D�Դϴ�.");
	}
	else {
		printf("�л��� ������ F�Դϴ�.");
	}
}
