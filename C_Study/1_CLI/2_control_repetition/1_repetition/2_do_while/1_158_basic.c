#include <stdio.h>
// do-while문은 반복영역(Statement Block)을 최소한 한번은 실행하는 구조이다.
void main(){
	int num=0;
	
	do{
		printf("Hello wolrd!\n");
		num++;
		//	}while(num<3); // ; 가 실수로 빠뜨리지 말 것!
	}while(num<0); // 반복영역이 최소한 한 번 실행되었을때 문제가 없는지
}				   // 사용하기 전에 고려해야 한다.
