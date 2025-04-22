#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	do{
		if(n%2){
			n=n*3+1;
			printf("%d * 3 + 1 = %d\n",(n-1)/3,n);
		}
		else{
		    n/=2;
			printf("%d / 2 = %d\n",n*2,n);	
		}
		
	}while(n!=1);
	return 0;
}
