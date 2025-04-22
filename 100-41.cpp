#include <stdio.h>

int main(){
	double t=1,s=0;
	for(int i=1;i<=50;i++){
		t=t*1/i;
		s+=t;
	}
	printf("%lf",s);
	return 0;
} 
