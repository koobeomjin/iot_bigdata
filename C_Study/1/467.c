#include <stdio.h>

struct point{
	int xpos;
	int ypos;
	struct point * ptr;
};

void main(){
	struct point pos1={1, 1};
	struct point pos2={2, 2};
	struct point pos3={3, 3};

	pos1.ptr = &pos2;
	pos2.ptr = &pos3;
	pos3.ptr = &pos1;

	printf("���� �������... \n");
	printf("%d, %d");
}
