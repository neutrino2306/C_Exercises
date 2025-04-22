#include <stdio.h>
#include <math.h>

int main(){
	double a1,b1,a2,b2,c,d;
	scanf("%lf%lf%lf%lf",&a1,&b1,&a2,&b2);
	c=(a1*a2*cos(b1+b2))<0&&(a1*a2*cos(b1+b2))>-0.005?0:(a1*a2*cos(b1+b2));
	d=(a1*a2*sin(b1+b2))<0&&(a1*a2*sin(b1+b2))>-0.005?0:(a1*a2*sin(b1+b2));
	printf("%.2lf",c);
	if(d<0) printf("-");
	else printf("+"); 
	printf("%.2lfi",d>0?d:fabs(d));
	return 0;
}
