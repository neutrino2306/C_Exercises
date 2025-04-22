#include <stdio.h>
#include <math.h>

int main(){
	int c=0;
	for(int i=1;i<=100;i++){
	  for(int j=i+1;j<=100;j++){
//	  	for(int k=1+j;k<=100;k++){
//	  	    if(i*i+j*j==k*k){
//	  	    	c++;
//	  	    	printf("%4d\t%4d\t%4d    ",i,j,k);
//	  	    	if(c%4) printf("\t");
//	  	    	else printf("\n");
//	    	}	
//		}
        int k=sqrt(i*i+j*j);
        if(k<=100&&k<i+j&&(k*k==i*i+j*j)){
        		c++;
	  	    	printf("%4d\t%4d\t%4d    ",i,j,k);
	  	    	if(c%4) printf("\t");
	  	    	else printf("\n");
		}
	  }
	}
	return 0;
}
