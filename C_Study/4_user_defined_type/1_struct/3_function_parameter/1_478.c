#include <stdio.h>
#pragma warning (disable : 4996)

typedef struct point{
	int xpos;
	int ypos;
}Point;

void ShowPosition(Point pos){
	printf("[%d, %d] \n",pos.xpos, pos.ypos);
}

Point GetCurrentPosition(void){
	Point cen;
	printf("Input current pos: ");
	scanf("%d %d", &cen.xpos, &cen.ypos);
	return cen;
}

void main(){
	Point curPos=GetCurrentPosition();
	ShowPosition(curPos);
}
