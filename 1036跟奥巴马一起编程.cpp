#include <stdio.h>

int main(){
	int n,l;
	char c;
	scanf("%d %c",&n,&c);
	l=(int)(1.0*n/2+0.5);
    for(int i=0;i<l;i++){
    	if(i==0||i==l-1){
    		for(int j=0;j<n;j++){
    			printf("%c",c); 
			}
		}
		else {
			for(int k=0;k<n;k++){
				if(k==0||k==n-1){
					printf("%c",c);
				}
				else printf(" ");
			}
		}
		if(i!=l-1) printf("\n");
	}
	return 0;
}
