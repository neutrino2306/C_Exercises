#include <stdio.h>

int main(){
	double c=0;
	for(int i=0;i<5;i++){
		c=(c+1000)/(1+12*0.0063);
	}
	printf("%lf",c);
	return 0;
}
