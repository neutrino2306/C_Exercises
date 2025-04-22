#include <stdio.h>
#include <math.h>

int gcd(int m,int n){
	m=abs(m);
	n=abs(n);
	return n?gcd(n,m%n):m;
}

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	printf("最大公因数是：%d",gcd(m,n));
	return 0;
}
