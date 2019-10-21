#include <stdio.h>
#pragma warning (disable: 4996)

int my_sum(int n) {
	int sum = 0;
	int number = 0;

	number++;

	if (number == 10)
	sum = sum + my_sum(number);

}

void main() {
	int total;
	int init_value = 0;

	total = my_sum(init_value);
}