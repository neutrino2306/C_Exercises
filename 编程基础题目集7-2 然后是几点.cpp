#include <stdio.h>
int main(){
	
	int a,b,c,d,e,f,g,h,i;
	scanf("%d %d",&a,&b);
	c=a/100;
	d=a%100;
	e=c*60+d;
	f=e+b;
	g=f/60;
	h=f%60;
	i=g*100+h;
	
	if(g<1){
		printf("0%d",i);
	}
	else printf("%d",i); 
	return 0;
}
