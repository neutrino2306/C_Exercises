#include <stdio.h>
#include <stdlib.h>

void f(int *s,int n){
	for(int i=0;i<4;i++,n/=10){
		s[i]=n%10;
	}
}

int m(int *s){
	int t=0;
	for(int i=0;i<4;i++){
		t=t*10+s[i];
	}
	return t;
}

int com(const void *a,const void *b){
	return *(int *)b-*(int *)a;
}

int cmp(const void *a,const void *b){
	return *(int *)a-*(int *)b;
}

int main(){
	int s[4],n,a,b;
	scanf("%d",&n);
	do{
		f(s,n);
		qsort(s,4,sizeof(s[0]),com);
		a=m(s);
		qsort(s,4,sizeof(s[0]),cmp);
		b=m(s);
		n=a-b;
		printf("%4d - %4d = %4d\n",a,b,n);
	}while(n!=6174);
	return 0;
}
