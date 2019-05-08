#include <stdio.h>

void main(){
	double a;	
	double b;
	double result;

	printf("두 개의 실수를 입력하세요: ");
	scanf("%lf %lf", &a, &b);

	result = a+b;
	printf("%lf\n",result);

	result = a-b;
	printf("%lf\n",result);
		
	result = a*b;
	printf("%lf\n",result);

	result = a-b;
	printf("%lf\n",result);
}
