#include <stdio.h>

void main(){
	int a;
	int z;
	int result;


	for(a=1;a<10;a++){
		for(z=1;z<10;z++){
			//조건 부합: if(a+z == 9 || z+a == 9)
			if(a+z == 9){
				printf("%d%d\n", a, z);
			}
		}
	}
}

