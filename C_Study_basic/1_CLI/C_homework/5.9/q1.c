#include <stdio.h>

void main(){
	int number_input=1;
	int number_limit=0;

	printf("양의 정수를 입력하세요: ");
	scanf("%d",&number_limit);

	while(number_input <= number_limit){
		printf("Hello world!\n",number_input);
		number_input++;
	}
}
