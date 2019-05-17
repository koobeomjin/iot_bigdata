#include <stdio.h>

void main(){
	int f_num;
	int l_num;
	int result=0;

	for(f_num=1;f_num<9;f_num++){
		if(f_num%2 == 0){

			for(l_num=1;f_num<9;l_num++){
				result = f_num * l_num;
				printf("%d*%d = %d\n", f_num, l_num, result);
				if(l_num==f_num){
					break;
				}
			}
		}
	}
}

