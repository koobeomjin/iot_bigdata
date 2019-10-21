#include <stdio.h>
#pragma warning (disable : 4996)

/*
typedef struct point{
	int xpos;
	int ypos;
} Point;
*/

struct point {
	int xpos;
	int ypos;
};

void ShowPosition(struct point pos) {
	printf("전달 받은 원본값 [%d, %d] \n", pos.xpos, pos.ypos);
	pos.xpos += 10;
	pos.ypos += 10;
	printf("ShowPosition에서 수정 [%d, %d] \n", pos.xpos, pos.ypos);
}

struct point GetCurrentPosition(void) {
	struct point cen;
	printf("Input current pos: ");
	scanf("%d %d", &cen.xpos, &cen.ypos);
	return cen;
}

void main() {
	// 구조체는 대입 연산이 가능하다.
	struct point curPos = GetCurrentPosition();
	ShowPosition(curPos);

	printf("main함수에서 좌표 확인 [%d, %d] \n", curPos.xpos, curPos.ypos);
}