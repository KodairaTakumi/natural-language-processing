#include <stdio.h>
#include<ctype.h>
  
  
  int chek(char ch){
  	int ans;
  	if(isprint(ch)){
		ans = 1;
	} else if(iscntrl(ch)){
  		ans = 1;
  	}else {
  		ans = 0;
  	}
  	return ans;
  }



int main(void){
  
  char ch;
  FILE *fp;
 
  fp = fopen("file.txt", "r");
  
  while((ch = fgetc(fp)) != EOF){
  	if(chek(ch)){
  		printf("e");
  	} else {
  		printf("\n");
  	}
  }
  
  fclose(fp);
 puts("");
  return 0;
}

