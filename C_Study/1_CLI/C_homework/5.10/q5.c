#include <stdio.h>

void main(){
	int multiplication=0;
	int num=1;

	printf("¸î ´Ü? ");
	scanf("%d", &multiplication);
	do{	
		printf("%d*%d = %d\n", multiplication, num, multiplication*num);
		num++;
	}while(num < 10);

	}
