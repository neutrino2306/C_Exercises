#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<sqrt(n)+1;i++){
		for(int j=0;j<=i;j++){
			for(int k=0;k<=j;k++){
				for(int l=0;l<=k;l++){
					if(n==pow(i,2)+pow(j,2)+pow(k,2)+pow(l,2)){
							printf("%d = %d * %d + %d * %d + %d * %d + %d * %d",n,i,i,j,j,k,k,l,l);
							goto out;
				  }
				}
			}
		}
	}
	out:
	return 0;
} 
