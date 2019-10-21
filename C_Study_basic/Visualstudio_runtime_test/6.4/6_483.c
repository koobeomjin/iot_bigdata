#include <stdio.h>
#pragma warning (disable : 4996)

typedef struct {
	int xpos;
	int ypos;
} Point;

Point AddPoint(Point pos1, Point pos2) {
	Point pos = { pos1.xpos + pos2.ypos, pos1.ypos + pos2.ypos };
	return pos;
}

// Call by reference type1: 인자에 대한 주소값을 넘겨줌
// 장점: 인자에 대한 메모리 카피 작업이 일어나지 않아서
//		 프로그램 속도 및 메모리 사용 효율을 높여준다.
Point AddPoint2(Point* pos1, Point* pos2) {
	Point pos = { (pos1->xpos) + (pos2->ypos), (pos1->ypos) + (pos2->ypos) };
	return pos;
}
// Call bt reference type2: 인자 및 반환 값까지도 매개변수로 처리하여
//							넘겨줌
// 장점 : 호출 하는 쪽에서 반환값에 대한 메모리 카피가 일어나지 않아
//		  프로그램 속도 및 메모리 사용 효율을 높여준다.
Point AddPoint3(Point* pos1, Point* pos2, Point* pos3) {
	pos3->xpos = (pos1->xpos) + (pos2->xpos);
	pos3->ypos = (pos1->ypos) + (pos2->ypos);
}
// Call bt reference type3: type2와 동일하며 추가적으로
//							반환값을 정의하며 해당 반환값은 오로지 함수가 정상적으로
//							수행했는지에 대한 에러코드를 리턴함
//							ex) 0:정상 수행, 1:인자값의 문제, 2:segmantation Fault...
int AddPoint4(Point* pos1, Point* pos2, Point* pos3) {
	pos3->xpos = (pos1->xpos) + (pos2->xpos);
	pos3->ypos = (pos1->ypos) + (pos2->ypos);
}

Point MinPoint(Point pos1, Point pos2) {
	Point pos = { pos1.xpos - pos2.xpos, pos1.ypos - pos2.ypos };
	return pos;
}

Point MinPoint2(Point* pos1, Point* pos2) {
	Point pos = { (pos1->xpos) - (pos2->xpos), (pos1->ypos) - (pos2->ypos) };
	return pos;
}

Point MinPoint3(Point* pos1, Point* pos2, Point* pos3) {
	pos3->xpos = (pos1->xpos) - (pos2->xpos);
	pos3->ypos = (pos1->ypos) - (pos2->ypos);
}

void main() {
	Point pos1 = { 5,6 };
	Point pos2 = { 2,9 };
	Point result;
	result = AddPoint(pos1, pos2);
	printf("[%d, %d] \n", result.xpos, result.ypos);
	result = MinPoint(pos1, pos2);
	printf("[%d, %d] \n", result.xpos, result.ypos);

	printf("Call by reference style\n");
	result = AddPoint2(&pos1, &pos2);
	printf("[%d, %d] \n", result.xpos, result.ypos);
	result = MinPoint2(&pos1, &pos2);
	printf("[%d, %d] \n", result.xpos, result.ypos);
}