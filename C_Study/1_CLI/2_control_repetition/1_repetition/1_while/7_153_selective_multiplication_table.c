#include <stdio.h>
// ������:multiplication table, (informal) times tables
void main(){
	int multiplication=0;
	int num=1;

	printf("�� ��? ");
	scanf("%d", &multiplication);

	while(num < 10){
		printf("%d*%d = %d\n", multiplication, num, multiplication*num);
		num++;
	}
}
