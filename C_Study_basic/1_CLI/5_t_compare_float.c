#include <stdio.h>

void main(){
	float my_pi=3.141592;

	// Foating Type(float, long double..) 변수를
	// == 연산자로 비교하는 것은 100% True를 이끌어 낼 수 없다.
	// Floating Type 변수는 값이 저장되는 것이 아니라 수식이 저장되기
	// 때문이다. 90P 참조
	if(my_pi == 3.141592)
			printf("Correct Pi!");

	printf("my_pi: %f\n", my_pi);
	printf("my_pi: %.10lf\n\n", my_pi);
}
