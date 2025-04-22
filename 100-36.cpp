#include <stdio.h>

int gcd(int a,int b){
	return b?gcd(b,a%b):a;
}

int main(){
	for(int i=1,c=0;i<40;i++){
		if(gcd(i,40)==1){
			printf("%d/%d",i,40);			
		}
		else{
			printf("%d/%d",i/gcd(i,40),40/gcd(i,40));
		}
		c++;
		if(c%4==0) printf("\n");
		else printf("\t");
	}
	return 0;
}
