#include<stdio.h>

void main(){
	int number1=0;
	int number2=0;
	int result;

	printf("몇개의 정수를 사용하시겠습니까?: ");
	scanf("%d", &number1);

	while(number1 > 0){
		printf("정수를 입력하세요: \n");
		scanf("%d",&number2);
		--number1;
	}
}
