#include <stdio.h>

void main(){
	int number_input=1;
	int number_limit=0;

	printf("���� ������ �Է��ϼ���: ");
	scanf("%d",&number_limit);

	while(number_input <= number_limit){
		printf("Hello world!\n",number_input);
		number_input++;
	}
}
