#include<stdio.h>

int main(void){
	int z = '\00 ';
	char zz = 'a'+ (z % 28);
	
	zz = 'J';
	
	printf("%c",z);
	
	return 0;
}
