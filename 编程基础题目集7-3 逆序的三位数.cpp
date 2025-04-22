# include <stdio.h>
int main(){
	int n,a,b,c,d;
	scanf("%d",&n);
	a=n/100;
	b=(n%100)/10;
	c=n%10;
	d=c*100+b*10+a;
	printf("%d",d);
	
	return 0;
}
