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
	} 
	return num;
}
int cheng(int a[],char A[]){
	int i,nb=0,j=28;
	char wb;
	
	for(i=0;i<=27;i++){
		nb = a[i];
		for(j;j<=nb;j++){
			A[j] = A[i];
		}
	}
	for(i=28;i<j;i++){
		int k = rand() % j;
		int t = a[i];
		a[i] = a[k];
		a[k] = t;
	}
	return 30;
}

int main(void){
	
	FILE *op;
	FILE *tt;
	int ch1 = 27,num;
	char ch2;
	int pp = 0;
	int na,nb,nc,nd,ne,nf,ng,nh,ni,nj,nk,nl,nm,nn,no,np,nq,nr,ns,nt,nu,nv,nw,nx,ny,nz,nkg,nss;
	int a[29] = {};
	int b[29] = {};
	int c[29] = {};
	int d[29] = {};
	int e[29] = {};
	int f[29] = {};
	int g[29] = {};
	int h[29] = {};
	int i[29] = {};
	int j[29] = {};
	int k[29] = {};
	int l[29] = {};
	int m[29] = {};
	int n[29] = {};
	int o[29] = {};
	int p[29] = {};
	int q[29] = {};
	int r[29] = {};
	int s[29] = {};
	int t[29] = {};
	int u[29] = {};
	int v[29] = {};
	int w[29] = {};
	int x[29] = {};
	int y[29] = {};
	int z[29] = {};
	int kg[29] = {};
	int ss[29] = {};
	
	char A[999] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','\n',' '};
	char B[999] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','\n',' '};
	char C[999] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','\n',' '};
	char D[999] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','\n',' '};
	char E[999] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','\n',' '};
	char F[999] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','\n',' '};
	char G[999] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','\n',' '};
	char H[999] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','\n',' '};
	char I[999] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','\n',' '};
	char J[999] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','\n',' '};
	char K[999] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','\n',' '};
	char L[999] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','\n',' '};
	char M[999] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','\n',' '};
	char N[999] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','\n',' '};
	char O[999] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','\n',' '};
	char P[999] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','\n',' '};
	char Q[999] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','\n',' '};
	char R[999] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','\n',' '};
	char S[999] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','\n',' '};
	char T[999] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','\n',' '};
	char U[999] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','\n',' '};
	char V[999] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','\n',' '};
	char W[999] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','\n',' '};
	char X[999] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','\n',' '};
	char Y[999] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','\n',' '};
	char Z[999] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','\n',' '};
	char KG[999] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','\n',' '};
	char SS[999] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','\n',' '};
	
	
	op = fopen("output.txt","r");
	
	while((ch2 = fgetc(op)) != EOF){
		
		switch(ch1){
			case 0:
				a[chek(ch2)] += 1;
			break;
			case 1:
				b[chek(ch2)] += 1;
			break;
			case 2:
				c[chek(ch2)] += 1;
			break;
			case 3:
				d[chek(ch2)] += 1;
			break;
			case 4:
				e[chek(ch2)] += 1;
			break;
			case 5:
				f[chek(ch2)] += 1;
			break;
			case 6:
				g[chek(ch2)] += 1;
			break;
			case 7:
				h[chek(ch2)] += 1;
			break;
			case 8:
				i[chek(ch2)] += 1;
			break;
			case 9:
				j[chek(ch2)] += 1;
			break;
			case 10:
				k[chek(ch2)] += 1;
			break;
			case 11:
				l[chek(ch2)] += 1;
			break;
			case 12:
				m[chek(ch2)] += 1;
			break;
			case 13:
				n[chek(ch2)] += 1;
			break;
			case 14:
				o[chek(ch2)] += 1;
			break;
			case 15:
				p[chek(ch2)] += 1;
			break;
			case 16:
				q[chek(ch2)] += 1;
			break;
			case 17:
				r[chek(ch2)] += 1;
			break;
			case 18:
				s[chek(ch2)] += 1;
			break;
			case 19:
				t[chek(ch2)] += 1;
			break;
			case 20:
				u[chek(ch2)] += 1;
			break;
			case 21:
				v[chek(ch2)] += 1;
			break;
			case 22:
				w[chek(ch2)] += 1;
			break;
			case 23:
				x[chek(ch2)] += 1;
				
			break;
			case 24:
				y[chek(ch2)] += 1;
				
			break;
			case 25:
				z[chek(ch2)] += 1;
			break;
			case 26:
				kg[chek(ch2)] += 1;
				
			break;
			case 27:
				ss[chek(ch2)] += 1;
				
			break;
			default:
				num = 27;
				
			break;
		}
		ch1 = chek(ch2);
	}
		
	fclose(op);
	
	na =cheng(a,A);
	nb =cheng(b,B);
	nc =cheng(c,C);
	nd =cheng(d,D);
	ne =cheng(e,E);
	nf =cheng(f,F);
	ng = cheng(g,G);
	nh = cheng(h,H);
	ni = cheng(i,I);
	nj = cheng(j,J);
	nk = cheng(k,K);
	nl = cheng(l,L);
	nm = cheng(m,M);
	nn = cheng(n,N);
	no = cheng(o,O);
	np = cheng(p,P);
	nq = cheng(q,Q);
	nr = cheng(r,R);
	ns = cheng(s,S);
	nt = cheng(t,T);
	nu = cheng(u,U);
	nv = cheng(v,V);
	nw = cheng(w,W);
	nx = cheng(x,X);
	ny = cheng(y,Y);
	nz = cheng(z,Z);
	nkg = cheng(kg,KG);
	nss = cheng(ss,SS);	
	
	tt = fopen("twotxt.txt","w");
	ch2 = ' ';
	for(pp=0;pp<=1000;pp++){
		fprintf(tt,"%c",ch2);
		switch(ch2){
			case 'a':
				ch2 = A[na];
				na += 1;
			break;
			case 'b':
				ch2 = B[nb];
				nb += 1;
			break;
			case 'c':
				ch2 = C[nc];
				nc += 1;
			break;
			case 'd':
				ch2 = D[nd];
				nd += 1;
			break;
			case 'e':
				ch2 = E[ne];
				ne += 1;
			break;
			case 'f':
				ch2 = F[nf];
				nf += 1;
			break;
			case 'g':
				ch2 = G[ng];
				ng += 1;
			break;
			case 'h':
				ch2 = H[nh];
				nh += 1;
			break;
			case 'i':
				ch2 = I[ni];
				ni += 1;
			break;
			case 'j':
				ch2 = J[nj];
				nj += 1;
			break;
			case 'k':
				ch2 = K[nk];
				nk += 1;
			break;
			case 'l':
				ch2 = L[nl];
				nl += 1;
			break;
			case 'm':
				ch2 = M[nm];
				nm += 1;
			break;
			case 'n':
				ch2 = N[nn];
				nn += 1;
			break;
			case 'o':
				ch2 = O[no];
				no += 1;
			break;
			case 'p':
				ch2 = P[np];
				np += 1;
			break;
			case 'q':
				ch2 = Q[nq];
				nq += 1;
			break;
			case 'r':
				ch2 = R[nr];
				nr += 1;
			break;
			case 's':
				ch2 = S[ns];
				ns += 1;
			break;
			case 't':
				ch2 = T[nt];
				nt += 1;
			break;
			case 'u':
				ch2 = U[nu];
				nu += 1;
			break;
			case 'v':
				ch2 = V[nv];
				nv += 1;
			break;
			case 'w':
				ch2 = W[nw];
				nw += 1;
			break;
			case 'x':
				ch2 = X[nx];
				nx += 1;
			break;
			case 'y':
				ch2 = Y[ny];
				ny += 1;
			break;
			case 'z':
				ch2 = Z[nz];
				nz += 1;
			break;
			case '\n':
				ch2 = KG[nkg];
				nkg += 1;
			break;
			case ' ':
				ch2 = SS[nss];
				nss += 1;
			break;
			default:
			break;
		}
	}
	fprintf(tt,"\n");
	fclose(tt);
	return 0;	
		
}
		
		
		
		
		
		
		
		
