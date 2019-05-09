#include <stdio.h>

void main(){
	int x_coordinate1;
	int x_coordinate2;
	int y_coordinate1;
	int y_coordinate2;
	int result1;
	int result2;
	int result3;

	printf("좌상단의 x, y 좌표를 입력하세요: ");
	scanf("%d %d", &x_coordinate1, &y_coordinate1);

	printf("우하단의 x, y 좌표를 입력하세요: ");
	scanf("%d %d", &x_coordinate2, &y_coordinate2);

	result1 = (y_coordinate1-x_coordinate1);
	result2 = (y_coordinate2-x_coordinate2);
	result3 = (result1*result2);

	printf("두 점이 이루는 사각형의 넓이는 %d입니다.\n", result3);
}
