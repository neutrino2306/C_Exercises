#include <stdio.h>
#include <math.h>

int p(int  a){
	int ret=0,c=0;
	for(int i=1;i<=sqrt(a);i++){
		if(a%i==0) c++;
	}
	if(c==1) ret=1;
	return ret;
}

int main(){
	for(int i=2;i<20;i++){
		if(p(i)&&p(pow(2,i)-1))
		printf("%d %.0f\n",i,pow(2,i)-1);
	}
	return 0;
}
