#include <stdio.h>

void main(){
	int world=7;
	int number=1;
	printf("World sector: %d",world);
	/*
	 	while(number<=50) 		while ������ ��ɹ��� �����̸� {} ���� ����
		printf("Hello guest%d!\n",number++);	
	*/

	// {} ������ ���� �ʴ� ���� ����.
	// �Ʒ��� ���� ������ indentation�� �ϰ� statement block����
	// �����ڰ� �����Ͽ� ���α׷��� ������ �� �� �ֱ� �����̴�.
	while(number<50)
		printf("Hello guest%d!\n",number);
		number++;
}
