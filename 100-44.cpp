#include <stdio.h>
#include <math.h>

int p(int a){
	int ret=0,c=0;
	for(int i=1;i<=sqrt(a);i++){
		if(a%i==0) c++;
	}
	if(c==1) ret=1;
	return ret;
}

int main(){
	for(int i=2,c=0;i<=1000;i++){
		if(p(i)&&p(i+2)){
		printf("%d %d\n",i,i+2);
		c++;	
		}
		if(i==1000) printf("%d",c);
	}
	return 0;
}
