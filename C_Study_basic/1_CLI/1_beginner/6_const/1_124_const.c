//#include <stdio.h> <= Standard IO (ex: printf, scanf등을 사용할 때 쓴다.)

void main(){
	int military_serial_number=1771015698; //military_serial_number: 변수, 1771015698: 상수
	int my_birthday=971207;
	// const는 constant를 의미한다.(영원히 바뀌지 않음)
	const int ci_military_serial_number=1771015698; // ci = const int를 의미
	const int ci_my_birthday=971207; // ci_my_birthday: const

	// 값이 바뀌지 않고 참조만 하고자하는 성격의 데이터
	// 값을 바꾸는 행위 자체가 문제를 일으킬 수 있다.
	military_serial_number=1772022818;
	my_birthday=971207;
	my_birthday++;

	ci_military_serial_number=1234567890;
	ci_my_birthday=970217;
	ci_my_birthday++;
}
