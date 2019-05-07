#include <stdio.h>

void main(){
	int num;	    // 00000000 00000000 00000000 00000100
	printf("정수 입력: ");
	scanf("%d", &num);
	num = ~num; 	// 단순한 기계어라고 생각하고 외우자

	num = num+1;
	printf("부호로 바꾼 결과: %d\n", num);




}
