#include <stdio.h>

void main(){
	double a;	
	double b;
	double result;

	printf("�� ���� �Ǽ��� �Է��ϼ���: ");
	scanf("%lf %lf", &a, &b);

	result = a+b;
	printf("%lf\n",result);

	result = a-b;
	printf("%lf\n",result);
		
	result = a*b;
	printf("%lf\n",result);

	result = a/b;
	printf("%lf\n",result);
}
