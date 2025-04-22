# include <stdio.h>
int main(){
	int p,q,n,a,b;
	scanf("%d/%d",&p,&q);
	a=p;
	b=q;
	while(b!=0){
		n=a%b;
		a=b;
		b=n;
	} 
	printf("%d/%d",(p/a),(q/a));
	return 0;
} 
