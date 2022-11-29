#include<stdio.h>
#include<ctype.h>
#include <stdlib.h>
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

int miketxt(char a[],int size){
	int i;
	for(i=0;i<size;i++){
		int j = rand() % size;
		int t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
	return 0;
}
	



int main(){
	char ch, mb;
	FILE *op;
	FILE *co;
	FILE *ot;
	int dt[29] = {};
	char ab[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char tx[999999] = {};
	int eng,i,nb,j=0;
	double tt;
	int k = 0;
	
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
			i = -1;
		}
	}
	for(i=0;i<=24;i++){
		tt += dt[i];
	}
	
	co = fopen("count.txt", "w");
	
	for(i=0;i<=25;i++){
		fprintf(co, "%c = %5d  %8f%%\n", ab[i],dt[i],dt[i] / tt);
	}
	fprintf(co, "kaigyou = %d\n", dt[26]);
	fprintf(co, "supe-su = %d\n", dt[27]);
	fclose(co);
	
	
	for(i=0;i<=25;i++){
		j += dt[i] / 100;
		for(k;k<=j;k++){
			tx[k] = ab[i];
		}
	}
	
	j += dt[26] / 100;
	for(k;k<=j;k++){
		tx[k] = '\n';
	}
	j += dt[27] / 100;
	for(k;k<= j;k++){
		tx[k] = ' ';
	}
	
	miketxt(tx,j);
	ot = fopen("onetxt.txt","w");
	for(i=0;i<=1000;i++){
		fprintf(ot,"%c",tx[i]);
	}
	fprintf(ot,"\n");
	fclose(ot);
	
	return 0;
}


	
	
	
	
	
	
	
	
	
	
	
	
	
