#include <stdio.h>

void main(){
	
	int input_number;
	int num1, num2, num3;

	printf("���ڸ� �Է��ϼ���: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	printf("%d * %d + %d = %d\n", num1, num2, num3, (num1*num2)+num3);
}
