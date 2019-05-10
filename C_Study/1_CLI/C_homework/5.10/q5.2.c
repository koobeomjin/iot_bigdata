#include <stdio.h>

void main(){
	int current_times = 2;
	int multiplier=0;

	printf("\n구구단을 외자!\n\n");
	do{
		multiplier=1;
	printf("==== %d단 ===== \n\n", current_times);
	do{
	printf("%d * %d = %d \n", current_times, multiplier, current_times*multiplier);
	multiplier++;
	printf("\n");		
	current_times++;

	}while(current_times<10);
	
	}while(multiplier<10);
}
