#include <stdio.h>

int gcd(int a,int b){
	return b?gcd(b,a%b):a;
}

int main(){
	int a,b,c,d,m,e,f;
	scanf("%d/%d,%d/%d",&a,&b,&c,&d);
	m=b*d/gcd(b,d);
	e=a*(m/b);
	f=c*(m/d);
	if(e<f) printf("%d/%d<%d/%d",a,b,c,d);
	else if(e>f) printf("%d/%d>%d/%d",a,b,c,d);
	else printf("%d/%d=%d/%d",a,b,c,d);
	return 0;
}
