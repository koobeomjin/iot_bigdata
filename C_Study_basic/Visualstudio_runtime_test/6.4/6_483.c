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

// Call by reference type1: ���ڿ� ���� �ּҰ��� �Ѱ���
// ����: ���ڿ� ���� �޸� ī�� �۾��� �Ͼ�� �ʾƼ�
//		 ���α׷� �ӵ� �� �޸� ��� ȿ���� �����ش�.
Point AddPoint2(Point* pos1, Point* pos2) {
	Point pos = { (pos1->xpos) + (pos2->ypos), (pos1->ypos) + (pos2->ypos) };
	return pos;
}
// Call bt reference type2: ���� �� ��ȯ �������� �Ű������� ó���Ͽ�
//							�Ѱ���
// ���� : ȣ�� �ϴ� �ʿ��� ��ȯ���� ���� �޸� ī�ǰ� �Ͼ�� �ʾ�
//		  ���α׷� �ӵ� �� �޸� ��� ȿ���� �����ش�.
Point AddPoint3(Point* pos1, Point* pos2, Point* pos3) {
	pos3->xpos = (pos1->xpos) + (pos2->xpos);
	pos3->ypos = (pos1->ypos) + (pos2->ypos);
}
// Call bt reference type3: type2�� �����ϸ� �߰�������
//							��ȯ���� �����ϸ� �ش� ��ȯ���� ������ �Լ��� ����������
//							�����ߴ����� ���� �����ڵ带 ������
//							ex) 0:���� ����, 1:���ڰ��� ����, 2:segmantation Fault...
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