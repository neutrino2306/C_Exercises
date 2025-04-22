#include <stdio.h>
#include <math.h>

int main(){
	float f,fd,a,b,c,d,x=1.5,o;
	scanf("%f%f%f%f",&a,&b,&c,&d);
	do{
		o=x;
		f=a*pow(o,3)+b*pow(o,2)+c*o+d;
		fd=3*a*pow(o,2)+2*b*x+c;
		x=o-f/fd;
	}while(fabs(x-o)>=1e-5);
	printf("%f",x);
	return 0;
}
