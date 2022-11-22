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
	char ch, mb;
	FILE *op;
	FILE *co;
	int dt[29] = {};
	char ab[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	int eng,i,nb;
	
	op = fopen("output.txt", "r");
	
	
	while((ch = fgetc(op)) != EOF){
		dt[chek(ch)] += 1;
	}
	
	fclose(op);
	
	for(i=0;i<=24;i++){
		if(dt[i]<dt[i+1]){
			nb = dt[i];
			dt[i] = dt[i+1];
			dt[i+1] = nb;
			
			mb = ab[i];
			ab[i] = ab[i+1];
			ab[i+1] = mb;
			i = 0;
		}
	}
	
	co = fopen("count.txt", "w");
	
	for(i=0;i<=25;i++){
		fprintf(co, "%c = %d\n", ab[i],dt[i]);
	}
	fprintf(co, "kaigyou = %d\n", dt[26]);
	fprintf(co, "supe-su = %d\n", dt[27]);
	fclose(co);
	
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
