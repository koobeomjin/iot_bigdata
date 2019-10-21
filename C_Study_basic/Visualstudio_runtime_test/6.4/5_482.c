#include <stdio.h>
#pragma warning (disable : 4996)

typedef struct point {
	int xpos;
	int ypos;
} Point;

void main() {
	Point pos1 = { 1, 2 };
	Point pos2;
	int arr[2] = { 1,2 };

	pos2 = pos1;

	printf("크기: %d \n", sizeof(pos1));
	printf("[%d, %d] \n", pos1.xpos, pos1.ypos);
	printf("크기: %d \n", sizeof(pos2));
	printf("[%d, %d] \n", pos2.xpos, pos2.ypos);
}