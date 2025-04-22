#include <stdio.h>
#include <math.h>
int main(){
	for(double y=10;y>=-10;y--){
		int m=2*sqrt(100-pow(y,2));
		for(int x=1;x<30-m;x++){
			printf(" ");
		}
		printf("*");
		for(int x=30-m;x<30+m;x++){
			printf(" ");
		}
		printf("*\n");
	}
	return 0;
}
