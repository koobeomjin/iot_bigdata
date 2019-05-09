// 복합연산자 (compound assignmet operator)

#include <stdio.h>

void main(){
	int accumulated_total=0; // 누적된 수의 총합
//	int 5_1_total=0, 5_2_total; <= 이와 같이 accumulated_total을 사용하면
//	누적된 총합을 구하기 위한 목적으로 불필요한 변수다.
	int num1=2, num2=4, num3=6;

	printf("혜경이의 5월 총 수입:%d\n", accumulated_total);

	accumulated_total=accumulated_total+10000;
	printf("5월 1일 혜경이의 5월 총 수입:%d\n", accumulated_total);

	accumulated_total=accumulated_total+50000;
	printf("5월 2일 혜경이의 5월 총 수입:%d\n", accumulated_total);

	// += 복합연산자 (compound operator)
	// accumulated_total += 30000; 은 accumulated_total=accumulated_total+30000
	// 과 동일하게 작용한다.
	accumulated_total += 30000;
	printf("5월 3일 혜경이의 5월 총 수입:%d\n", accumulated_total);

	// 이러한 복합연산자는 모든 산술연산자에도 동일하게 적용된다.
	// a = a+b <=> a+=b
	// a = a-b <=> a-=b
	// a = a*b <=> a*=b
	// a = a/b <=> a/=b
	// a = a%b <=> a%=b
	num1 += 3;
	num2 *= 4;
	num3 %= 5;
	printf("Result: %d, %d, %d \n", num1, num2, num3);
}
