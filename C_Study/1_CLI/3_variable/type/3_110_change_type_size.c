#include <stdio.h>

// 목적 : char, short type이 산술 연산시 사이즈의 변화 확인
int main(){
	char num1=1, num2=2, result1=0;
	short num3=300, num4=400, result2=0;
	char test_num1=100, tst_num_2=11, test_num1m reullt

	printf("size of num1: %d, num2: %d\n", sizeof(num1), sizeof(num2));
	printf("size of num3: %d, num4: %d\n", sizeof(num3), sizeof(num4));

	// char, short 계열의 타입의 산술 연산을 expression(표현식)으로만 사용했을 경우에는
	// 해당 타입보다 더 큰 타입의 임시변수(Temporary Variable)이 내부적으로 생성된다.
	// 이 임시 변수는 프로그램에서는 보이지 않고 컴파일러가 연산을 위해 생성한다.
	// 장점 : 연산속도가 빠르다.
	// 단점 : 메모리 낭비가 초래된다. 가독성이 떨어진다. ㄱ
	printf("size of char add: %d \n",sizeof(num1+num2));
	printf("size of short add: %d \n",sizeof(num3+num4));

	// 연산 결과를 같은 타입의 변수로 저장할 경우에는 본래의 타입 사이즈를 유지한다.
	// 장점 : 메모리를 최적화 할 수 있다. 가독성이 향ㅅ아된다. 디버깅이 용이하다.
	// 단점 : 연산속도가 상대적으로 느릴 수 있다.(반복적으로 수행되는 겨이 
	// 		  
	result1 = num1+num2;
	result2 = num3+num4;
	printf("size of result1 & result2: %d, %d \n", sizeof(result1), sizeof(result2));
}
