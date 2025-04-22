#include <stdio.h>
#include <math.h>
int main(){
	for(long int n=1001;n<2000;n+=2){
		if((int)(pow(n,2)-1)%8) printf("no");
		else printf("yes");
	}
	return 0;
}
