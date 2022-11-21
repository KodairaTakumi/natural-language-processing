#include <stdio.h>
#include<ctype.h>
#include <stdlib.h>


int chek(char ch){
	int ans;
	if(isalpha(ch)){
		ans = 1;
	} else if((ch)){
		ans = 1;
	} else if(ch == '\n'){
  		ans = 1;
	}else if(ch == ' '){
		ans = 1;
  	}else {
  		ans = 0;
  	}
  	return ans;
}



int main(void){
	
	char ch;
	FILE *fp;
	FILE *op;

	fp = fopen("file.txt", "r");
	op = fopen("output.txt", "w");

	while((ch = fgetc(fp)) != EOF){
		if(chek(ch)){
			fprintf(op, "%c",ch);
		} else {
			fprintf(op, " ");
		}
	}
  
	fclose(fp);
	puts("");
	return 0;
}

