#include <stdio.h>
/* 논리 Or 진리표		논리 Or		 참 : 0이 아닌 수
										거짓 : 0
	  					
 		A조건			B조건			결과

 		거짓			거짓			거짓

 		 참				거짓			 참

 		거짓			 참				 참

 		 참				 참				 참

 */
void main(){
	int num1=10;
	int num2=12;
	int result;

	printf("num1: %d, num2: %d\n", num1, num2);

	// 거짓 || 거짓
	result = (num1 == 5 || num2 == 10);
	printf("(num1 == 5 || num2 == 10) => 평가결과: %d\n", result);

	// 참 || 거짓
	result = (num1 == 10 || num2 == 10);
	printf("(num1 == 10 || num2 == 10) => 평가결과: %d\n", result);

	// 거짓 || 참
	result = (num1 == 5 || num2 == 12);
	printf("(num1 == 5 || num2 == 12) => 평가결과: %d\n", result);

	// 참 || 참
	result = (num1 == 10 || num2 == 12);
	printf("(num1 == 10 || num2 == 12) => 평가결과: %d\n", result);
}

