#include <stdio.h>

void main(){
	int number1=0;
	int total=100;

	do{
		total = (number1/2) + total;
		number1++;
	}while(number1 < 100);
	printf("100 ���� ���� �� ¦���� ��: %d",total);
}
