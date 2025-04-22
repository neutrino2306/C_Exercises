#include <stdio.h>

typedef struct{
	int a,b;
}fs;

int gcd(int a,int b){
	return b==0?a:gcd(b,a%b);
}

int gbs(int a,int b){
	return (a*b)/gcd(a,b);
}

int main(){
    int n,sum=0,p,q;
	scanf("%d",&n);
	fs s[n];
	for(int i=0;i<n;i++){
		scanf("%d/%d",&s[i].a,&s[i].b);
	}
	q=gbs(s[0].b,s[1].b);
	p=s[0].a*q/s[0].b+s[1].a*q/s[1].b;
	for(int i=2;i<n;i++){
		int t=q;
		q=gbs(t,s[i].b);
		p=p*q/t+s[i].a*q/s[i].b;
	}
	if(p%(q*n)){
		printf("%d/%d",p/gcd(q,p*n),q*n/gcd(q,p*n));
	}
	else printf("%d",p/(q*n));
	return 0;
} 
