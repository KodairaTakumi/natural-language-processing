#include<stdio.h>
#include<ctype.h>
#include <stdlib.h>

int chek(char ch){
	int num;
	int i;
	if(islower(ch)){
		num = ch - 97;
	} else if(isupper(ch)){
		num = ch - 65;
	} else if(ch == '\n'){
		num = 26;
	} else if(ch == ' '){
		num = 27;
	} else {
		num = 28;
	}
	
	return num;
}

int main(){
	char ch;
	FILE *op;
	FILE *co;
	int dt[29] = {};
	int eng,i;
	
	op = fopen("output.txt", "r");
	
	
	while((ch = fgetc(op)) != EOF){
		dt[chek(ch)] += 1;
	}
	
	fclose(op);
	
	co = fopen("count.txt", "w");
	
	for(i=0;i<=25;i++){
		fprintf(co, "%c = %d\n", i+65,dt[i]);
	}
	fprintf(co, "kaigyou = %d\n", dt[26]);
	fprintf(co, "supe-su = %d\n", dt[27]);
	fclose(co);
}
	
	
	
	
	
	
	
	
	
	
	
	
	
