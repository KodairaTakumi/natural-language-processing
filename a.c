#include<stdio.h>
int main(void){
	int i,j;
	FILE *ew;
	
	ew = fopen("engword.txt", "w");
	
	for(i=65;i<=92;i++){
		for(j=65;j<=92;j++){
			if(j == 92){
				fprintf(ew,"'/',");
			} else {
			fprintf(ew,"'%c',",j);
			}
		}
	}
	
	fclose(ew);
	return 0;		
}
