#include <stdio.h>

void main(){
	int limit;
	int index=1;

	printf("양의 정수 하나를 입력하세요: ");
	scanf("%d",&limit);

		while(index < limit+1){
			printf("%d \n",index*3);
			index++;
		}
}
