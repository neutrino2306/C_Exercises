#include <stdio.h>

int f(int a,int b);

int b(int a,int b,int c);

int main(){
	int n1,m1,n2,m2,k,s[10000]={0},c=0;
	scanf("%d/%d %d/%d %d",&n1,&m1,&n2,&m2,&k);
	int g=b(m2,m1,k);
	int l=((n1<n2)?n1:n2)*g/m1,h=((n1<n2)?n2:n1)*g/m2;
	for(int i=l+1;i<h;i++){
		if(f(i,g)==(g/k)){
			s[c++]=i/(g/k);
		}
	}
	for(int i=0;i<c;i++){
		printf("%d/%d",s[i],k);
		if(i!=c-1) printf(" ");
	}
	return 0;
}

int f(int a,int b){
	return b?f(b,a%b):a;
}

int b(int a,int b,int c){
	int p=b/f(a,b)*a,q=b/f(b,c)*c;
	return p/f(p,q)*q;
}

