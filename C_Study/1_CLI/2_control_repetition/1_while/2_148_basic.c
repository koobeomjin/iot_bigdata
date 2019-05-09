#include <stdio.h>

void main(){
	int world=7;
	int number=1;
	printf("World sector: %d",world);
	while(number<=50){ 					// 기본 문법 : while ([상수], [변수], [표현식]){
		printf("Hello guest%d!\n",number);		// { 뒤에 나오는 _____; <= 명령문, 명령어 라인 >> Statement
		number++;						// { } 사이의 명령문을 Statement Block이라 한다.
	}									// step1] while 이후의 괄호에는 상수, 변수, 표현식을 평가한다.)
}										// step2] 평가한 결과가 참(1)이면 변수나 상수는 0이 아닌 값이면
										//	while 이하의 statement block을 수행한다.
										// 		  거짓(0)이면 statement block을 빠져나온다. 
										// step3] step2에서 참인경우 step1으로 이동한다.
										// 소괄호 ( ) round bracket
										// 중괄호 { } brace
										// 대괄호 [ ] square bracket
										// ({[ <= opening, )}] <= closing
