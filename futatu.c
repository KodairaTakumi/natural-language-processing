#include<stdio.h>
#include<ctype.h>
#include <stdlib.h>
int a[785] = {};
char n1[784] ={'A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','C','C','C','C','C','C','C','C','C','C','C','C','C','C','C','C','C','C','C','C','C','C','C','C','C','C','C','C','D','D','D','D','D','D','D','D','D','D','D','D','D','D','D','D','D','D','D','D','D','D','D','D','D','D','D','D','E','E','E','E','E','E','E','E','E','E','E','E','E','E','E','E','E','E','E','E','E','E','E','E','E','E','E','E','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','G','G','G','G','G','G','G','G','G','G','G','G','G','G','G','G','G','G','G','G','G','G','G','G','G','G','G','G','H','H','H','H','H','H','H','H','H','H','H','H','H','H','H','H','H','H','H','H','H','H','H','H','H','H','H','H','I','I','I','I','I','I','I','I','I','I','I','I','I','I','I','I','I','I','I','I','I','I','I','I','I','I','I','I','J','J','J','J','J','J','J','J','J','J','J','J','J','J','J','J','J','J','J','J','J','J','J','J','J','J','J','J','K','K','K','K','K','K','K','K','K','K','K','K','K','K','K','K','K','K','K','K','K','K','K','K','K','K','K','K','L','L','L','L','L','L','L','L','L','L','L','L','L','L','L','L','L','L','L','L','L','L','L','L','L','L','L','L','M','M','M','M','M','M','M','M','M','M','M','M','M','M','M','M','M','M','M','M','M','M','M','M','M','M','M','M','N','N','N','N','N','N','N','N','N','N','N','N','N','N','N','N','N','N','N','N','N','N','N','N','N','N','N','N','O','O','O','O','O','O','O','O','O','O','O','O','O','O','O','O','O','O','O','O','O','O','O','O','O','O','O','O','P','P','P','P','P','P','P','P','P','P','P','P','P','P','P','P','P','P','P','P','P','P','P','P','P','P','P','P','Q','Q','Q','Q','Q','Q','Q','Q','Q','Q','Q','Q','Q','Q','Q','Q','Q','Q','Q','Q','Q','Q','Q','Q','Q','Q','Q','Q','R','R','R','R','R','R','R','R','R','R','R','R','R','R','R','R','R','R','R','R','R','R','R','R','R','R','R','R','S','S','S','S','S','S','S','S','S','S','S','S','S','S','S','S','S','S','S','S','S','S','S','S','S','S','S','S','T','T','T','T','T','T','T','T','T','T','T','T','T','T','T','T','T','T','T','T','T','T','T','T','T','T','T','T','U','U','U','U','U','U','U','U','U','U','U','U','U','U','U','U','U','U','U','U','U','U','U','U','U','U','U','U','V','V','V','V','V','V','V','V','V','V','V','V','V','V','V','V','V','V','V','V','V','V','V','V','V','V','V','V','W','W','W','W','W','W','W','W','W','W','W','W','W','W','W','W','W','W','W','W','W','W','W','W','W','W','W','W','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Z','Z','Z','Z','Z','Z','Z','Z','Z','Z','Z','Z','Z','Z','Z','Z','Z','Z','Z','Z','Z','Z','Z','Z','Z','Z','Z','Z','[','[','[','[','[','[','[','[','[','[','[','[','[','[','[','[','[','[','[','[','[','[','[','[','[','[','[','[','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/'};
char n2[784] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','/','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','/','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','/','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','/','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','/','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','/','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','/','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','/','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','/','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','/','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','/','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','/','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','/','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','/','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','/','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','/','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','/','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','/','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','/','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','/','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','/','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','/','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','/','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','/','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','/','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','/','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','/','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','/'};
	

int chek(char ch){
	int num;
	if(islower(ch)){
		num = ch - 97;
	} else if(isupper(ch)){
		num = ch - 65;
	} else if(ch == '\n'){
		num = 27;
	} else if(ch == ' '){
		num = 26;
	}
	return num;
}
int cheng(int a[],char n1[],char n2[]){
	int i,nb;
	char wb;
	
	for(i=0; i <= 783; i++){
		if(a[i] < a[i+1]){
			nb = a[i];
			a[i] = a[i+1];
			a [i+1] = nb;
			wb = n1[i];
			n1[i] = n1[i+1];
			n1[i+1] = wb;
			
			wb = n2[i];
			n2[i] = n2[i+1];
			n2[i+1] = wb;
			i = -1;
		}
	}
	return 0;
}

int one(char b[],int i){
	int z = i,k=0,num=0;
	char zz;
	for(i;i<= z+27;i++){
		num += a[i];
		if(26 == i%28){
			for(k;k<=num; k++){
				b[k] = '\n';
			}
		} else if(27 == i%28){
			for(k;k<=num;k++){
				b[k] = ' ';
			}
		} else {
			for(k;k<=num;k++){
				zz = i%28;
				b[k] = 'a'+zz;
			}
		}
	}
	i += 1;
	return k;
}
int miketxt(char a[],int size){
	int i;
	for(i=0;i<size;i++){
		int j = rand() % size;
		int t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
	size = 0;
	return 0;
}
	

	

int main(void){
	FILE *op;
	FILE *fu;
	FILE *tt;
	char ch2,wb;
	int ch1 = 26,num;
	int i,nb,k = 0,l=0;
	int awn,bwn,cwn,dwn,ewn,fwn,gwn,hwn,iwn,jwn,kwn,lwn,mwn,nwn,own,pwn,qwn,rwn,swn,twn,uwn,vwn,wwn,xwn,ywn,zwn,kgwn,sswn;
	char aw[99999] = {};
	char bw[99999] = {};
	char cw[99999] = {};
	char dw[99999] = {};
	char ew[99999] = {};
	char fw[99999] = {};
	char gw[99999] = {};
	char hw[99999] = {};
	char iw[99999] = {};
	char jw[99999] = {};
	char kw[99999] = {};
	char lw[99999] = {};
	char mw[99999] = {};
	char nw[99999] = {};
	char ow[99999] = {};
	char pw[99999] = {};
	char qw[99999] = {};
	char rw[99999] = {};
	char sw[99999] = {};
	char tw[99999] = {};
	char uw[99999] = {};
	char vw[99999] = {};
	char ww[99999] = {};
	char xw[99999] = {};
	char yw[99999] = {};
	char zw[99999] = {};
	char kgw[99999] = {};
	char ssw[99999] = {};
	
	
	op = fopen("output.txt", "r");
	
	while((ch2 = fgetc(op)) != EOF){
	
		num = chek(ch2);
		a[ch1 + ch2] += 1;
		
		ch1 = 28 * num;
	}
	fclose(op);
	l=0;
	awn = one(aw,l);
	l = 28;
	bwn = one(bw,l);
	l = 28 *2;
	cwn = one(cw,l);
	l = 28 *3;
	dwn = one(dw,l);
	l = 28 *4;
	ewn = one(ew,l);
	l = 28 *5;
	fwn = one(fw,l);
	l = 28 *6;
	gwn = one(gw,l);
	l = 28 *7;
	hwn = one(hw,l);
	l = 28 *8;
	iwn = one(iw,l);
	l = 28 *9;
	jwn = one(jw,l);
	l = 28 *10;
	kwn = one(kw,l);
	l = 28 *11;
	lwn = one(lw,l);
	l = 28 *12;
	mwn = one(mw,l);
	l = 28 *13;
	nwn = one(nw,l);
	l = 28 *14;
	own = one(ow,l);
	l = 28 *15;
	pwn = one(pw,l);
	l = 28 *16;
	qwn = one(qw,l);
	l = 28 *17;
	rwn = one(rw,l);
	l = 28 *18;
	swn = one(sw,l);
	l = 28 *19;
	twn = one(tw,l);
	l = 28 *20;
	uwn = one(uw,l);
	l = 28 *21;
	vwn = one(vw,l);
	l = 28 *22;
	wwn = one(ww,l);
	l = 28 *23;
	xwn = one(xw,l);
	l = 28 *24;
	ywn = one(yw,l);
	l = 28 *25;
	zwn = one(zw,l);
	l = 28 *26;
	kgwn = one(kgw,l);
	l = 28 *27;
	sswn = one(ssw,l);
	
	
	
	
	fu = fopen("futatu.txt", "w");
	
	for(i=0; i <= 783; i++){
		if(a[i] < a[i+1]){
			nb = a[i];
			a[i] = a[i+1];
			a [i+1] = nb;
			
			wb = n1[i];
			n1[i] = n1[i+1];
			n1[i+1] = wb;
			
			wb = n2[i];
			n2[i] = n2[i+1];
			n2[i+1] = wb;
			i = -1;
		}
	}
	for(i=0;i<=763;i++){
		
		if(a[i] > 0){
			fprintf(fu,"  %c%c...%d",n1[i],n2[i],a[i]);
		}
	}
	
	fclose(fu);
	k = 0;
	
		
	
	awn = miketxt(aw,awn);
	bwn = miketxt(bw,bwn);
	cwn = miketxt(cw,cwn);
	dwn = miketxt(dw,dwn);
	ewn = miketxt(ew,ewn);
	fwn = miketxt(fw,fwn);
	gwn = miketxt(gw,gwn);
	hwn = miketxt(hw,hwn);
	iwn = miketxt(iw,iwn);
	jwn = miketxt(jw,jwn);
	kwn = miketxt(kw,kwn);
	lwn = miketxt(lw,lwn);
	mwn = miketxt(mw,mwn);
	nwn = miketxt(nw,nwn);
	own = miketxt(ow,own);
	pwn = miketxt(pw,pwn);
	qwn = miketxt(qw,qwn);
	rwn = miketxt(rw,rwn);
	swn = miketxt(sw,swn);
	twn = miketxt(tw,twn);
	uwn = miketxt(uw,uwn);
	vwn = miketxt(vw,vwn);
	wwn = miketxt(ww,wwn);
	xwn = miketxt(xw,xwn);
	ywn = miketxt(yw,ywn);
	zwn = miketxt(zw,zwn);
	kgwn = miketxt(kgw,kgwn);
	sswn = miketxt(ssw,sswn);
	
	tt = fopen("twotxt.txt","w");
	
	ch2 = ' ';
	for(k=0;k<=1000;k++){
		
		switch(ch2){
			case 'a':
				ch2 = aw[awn];
				awn += 1;
				if(ch2 == 0){
					awn = 0;
				}
			break;
			case 'b':
				ch2 = bw[bwn];
				bwn += 1;
			break;
			case 'c':
				ch2 = cw[cwn];
				cwn += 1;
				if(ch2 == 0){
					cwn = 0;
				}
			break;
			case 'd':
				ch2 = dw[dwn];
				dwn += 1;
			break;
			case 'e':
				ch2 = ew[ewn];
				ewn += 1;
			break;
			case 'f':
				ch2 = fw[fwn];
				fwn += 1;
			break;
			case 'g':
				ch2 = gw[gwn];
				gwn += 1;
			break;
			case 'h':
				ch2 = hw[hwn];
				hwn += 1;
			break;
			case 'i':
				ch2 = iw[iwn];
				iwn += 1;
			break;
			case 'j':
				ch2 = jw[jwn];
				jwn += 1;
			break;
			case 'k':
				ch2 = kw[kwn];
				kwn += 1;
			break;
			case 'l':
				ch2 = lw[lwn];
				lwn += 1;
			break;
			case 'm':
				ch2 = mw[mwn];
				mwn += 1;
			break;
			case 'n':
				ch2 = nw[nwn];
				nwn += 1;
			break;
			case 'o':
				ch2 = ow[own];
				own += 1;
			break;
			case 'p':
				ch2 = pw[pwn];
				pwn += 1;
			break;
			case 'q':
				ch2 = qw[qwn];
				qwn += 1;
			break;
			case 'r':
				ch2 = rw[rwn];
				rwn += 1;
			break;
			case 's':
				ch2 = sw[swn];
				swn += 1;
			break;
			case 't':
				ch2 = tw[twn];
				twn += 1;
			break;
			case 'u':
				ch2 = uw[uwn];
				uwn += 1;
			break;
			case 'v':
				ch2 = vw[vwn];
				vwn += 1;
			break;
			case 'w':
				ch2 = ww[wwn];
				wwn += 1;
			break;
			case 'x':
				ch2 = xw[xwn];
				xwn += 1;
			break;
			case 'y':
				ch2 = yw[ywn];
				ywn += 1;
			break;
			case 'z':
				ch2 = zw[zwn];
				zwn += 1;
			break;
			case '\n':
				ch2 = kgw[kgwn];
				kgwn += 1;
			break;
			case ' ':
				ch2 = ssw[sswn];
				sswn += 1;
			break;
			default:
				ch2 = ' ';
			break;
			
		}
		fprintf(tt,"%c",ch2);
	}
	
	fclose(tt);
	
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
