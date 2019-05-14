#include <stdio.h>

void main(){
	int number=1;
	int sum=0;

	printf("정수를 입력하세요: \n");
	scanf("%d",&number);

	while(number != 0){
		sum = number+sum;
		printf("%d\n",sum);
		scanf("%d",&number);
		}


}
