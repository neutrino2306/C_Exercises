#include <stdio.h>

typedef struct{
	int h,b; 
}people;
int main(){
	int n,cj=0,cy=0;
	scanf("%d",&n);
	people j[n],y[n];
	for(int i=0;i<n;i++){
		int s=0,jf=0,yf=0;
		scanf("%d %d %d %d",&j[i].b,&j[i].h,&y[i].b,&y[i].h);
		s=j[i].b+y[i].b;
		if(j[i].h==s){
			jf=1;
		}
		if(y[i].h==s){
			yf=1;
		}
		if(jf==yf){
			continue;
		}
		else{
			(jf>yf)?cy++:cj++;
		}
	}
	printf("%d %d",cj,cy);
	return 0;
}
