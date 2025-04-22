#include <stdio.h>
#include <math.h>

int main(){
	int m,x,y,flag=0;
	double jj,yy,bb;
	scanf("%d%d%d",&m,&x,&y);
	for(jj=99;jj>9;jj--){
		yy=(((int) jj)%10)*10+jj/10;
		bb=1.0*yy/y;
		printf(" %lf  %lf  %lf\n",jj,yy,bb);
		if(fabs(jj-yy)==x*bb){
			flag=1;
			break;
		}
	}
	if(flag){
		printf("%lf",jj);
		printf(jj>m?" Cong":(jj==1.0*m?" Ping":" Gai"));
		printf(yy>m?" Cong":(yy==1.0*m?" Ping":" Gai"));
		printf(bb>m?" Cong":(bb==1.0*m?" Ping":" Gai"));
	}
	else printf("No Solution");
	return 0;
}
