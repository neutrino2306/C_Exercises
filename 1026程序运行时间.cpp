#include <stdio.h>


int main(){
	int c1,c2,k,h,m,s;
	scanf("%d %d",&c1,&c2);
	float t;
	t=1.0*(c2-c1)/100;
	k=(int)(t*10+5)/10;
    h=k/3600;
    m=(k-h*3600)/60;
    s=k-h*3600-m*60;
	printf("%02d:%02d:%02d",h,m,s);
	return 0;
}
