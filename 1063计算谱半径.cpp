#include <stdio.h>
#include <math.h>

int main(){
	int n,a,b;
	scanf("%d",&n);
	double p,c[n],max=0.0;
	for(int i=0;i<n;i++){
		scanf("%d%d",&a,&b);
		c[i]=pow((double)a,2.0)+pow((double)b,2.0);
	}
	for(int i=0;i<n;i++){
		if(max<c[i]){
			max=c[i];
		}
	}
	p=sqrt(max);
	printf("%.2lf",p);
	return 0;
}
