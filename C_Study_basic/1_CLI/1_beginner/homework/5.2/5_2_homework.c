#include <stdio.h>

void main(){
	int int_max=2147483647;
	signed int signed_int_max=2147483647;
	unsigned int unsigned_int_max=4294967295;
	unsigned unsigned_max=4294967295;
	char char_max=127;
	unsigned char uchar_max=255;
	short short_max=32767;
	short int short_int_max=32767;
	signed short int signed_short_int_max=32767;
	unsigned short unsigned_short_max=65535;
	unsigned short int unsigned_short_int_max=65535;
	signed signed_max=2147483647;
	long long long_max=9223372036854775807;
	signed long long slong_max=9223372036854775807;
	unsigned long long unsigned_long_long_max=18446744073709551615;
	long int long_int_max=2147483647;
	signed long int signed_long_int_max=2147483647;
	unsigned long int unsigned_long_int_max=4294967295;	

	printf("int 최대값 : %d\n", int_max);
	printf("signed int 최대값 : %d\n", signed_int_max);
	printf("unsigned int 최대값 : %u\n", unsigned_int_max);
	printf("unsigned 최대값 : %u\n", unsigned_max);
	printf("char 최대값 : %d\n", char_max);
	printf("unsigned char 최대값 : %u\n", uchar_max);
	printf("short 최대값 : %d\n", short_max);
	printf("short int 최대값 : %d\n", short_int_max);
	printf("signed short int 최대값 : %d\n", signed_short_int_max);
	printf("unsigned short 최대값 : %u\n", unsigned_short_max);
	printf("unsigned short int 최대값 : %u\n", unsigned_short_int_max);
	printf("signed 최대값 : %d\n", signed_max);
	printf("long long 최대값 : %lld\n", long_max);
	printf("signed long long 최대값 : %lld\n", slong_max);
	printf("unsigned long long 최대값 : %lld\n", unsigned_long_long_max);
	printf("long int 최대값 : %u\n", long_int_max);
	printf("signed long int 최대값 : %u\n", signed_long_int_max);
	printf("unsigned long int 최대값 : %u\n", unsigned_long_int_max);
	}
