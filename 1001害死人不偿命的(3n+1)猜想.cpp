#include <stdio.h>
 
int main(){
	
    int n,count;
    scanf("%d",&n);
    for(count=0;n!=1;count++){
    	if(n%2==0){
    		n=n/2;
		}
		else  n=(3*n+1)/2;
	}
	printf("%d",count);
	return 0;
}
