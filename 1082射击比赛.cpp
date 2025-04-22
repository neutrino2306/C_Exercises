#include <stdio.h>
#include <math.h>
int main(){
	int n,s=0,mn=0,nn=0,m=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int b,x,y;
		scanf("%d%d%d",&b,&x,&y);
		double l=pow((double)x,2.0)+pow((double)y,2.0);
		if(i==0){
			s=l;
			mn=b;
		}
		if(s>l){
			s=l;
			mn=b;
		}
		if(m<l){
			m=l;
			nn=b;
		}
	}
	printf("%04d %04d",mn,nn);
	return 0;
}
