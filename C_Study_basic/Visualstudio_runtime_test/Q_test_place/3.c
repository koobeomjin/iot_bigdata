#include <stdio.h>
# pragma warning (disable:4996)

void main() {
	int kscore = 0;
	int escore = 0;
	int mscore = 0;
	int average = 0;

	printf("학생의 국어 영어 수학 점수를 입력하세요: ");
	scanf("%d %d %d", &kscore, &escore, &mscore);
	average = (kscore + escore + mscore)/3;

	if (average >= 90) {
		printf("학생의 학점은 A입니다.");
	}
	else if(average >= 80) {
		printf("학생의 학점은 B입니다.");
	}
	else if (average >= 70) {
		printf("학생의 학점은 C입니다.");
	}
	else if (average >= 50) {
		printf("학생의 학점은 D입니다.");
	}
	else {
		printf("학생의 학점은 F입니다.");
	}
}
