#include <stdio.h>

void main(){
	int number1 = 4; 						// 00000000 00000000 00000000 00000100
	int shift_left = number1 << 2;			// 00000000 00000000 00000000 00010000
	int shift_right = shift_left >> 1;		// 00000000 00000000 00000000 00001000
	int result = (number1*shift_left/shift_right);

	printf("%d",result);


}
