#include <stdio.h>

void main(){
	int x_coordinate1;
	int x_coordinate2;
	int y_coordinate1;
	int y_coordinate2;
	int result1;
	int result2;
	int result3;

	printf("�»���� x, y ��ǥ�� �Է��ϼ���: ");
	scanf("%d %d", &x_coordinate1, &y_coordinate1);

	printf("���ϴ��� x, y ��ǥ�� �Է��ϼ���: ");
	scanf("%d %d", &x_coordinate2, &y_coordinate2);

	result1 = (y_coordinate1-x_coordinate1);
	result2 = (y_coordinate2-x_coordinate2);
	result3 = (result1*result2);

	printf("�� ���� �̷�� �簢���� ���̴� %d�Դϴ�.\n", result3);
}
