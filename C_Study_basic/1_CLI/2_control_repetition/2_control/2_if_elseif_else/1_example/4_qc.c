#include <stdio.h>

void main(){
	int number_1;
	int number_2;
	int abs;

	printf("�� ���� ������ �Է��ϼ���:");
	scanf("%d %d", &number_1, &number_2);
		abs = number_1<number_2 ? number_2-number_1:number_1-number_2;

		printf("%d", abs);
			
	}

