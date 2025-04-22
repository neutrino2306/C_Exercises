#include <stdio.h>

int main(){
	for(int i=1,c=0;i<=4;i++){
		for(int j=1;j<=4;j++){
			for(int k=1;k<=4;k++){
			   if(k!=j&&j!=i&&i!=k){
			   	c++;
			   	printf("%d%d%d",i,j,k);
			   	if(c%4) printf("\t");
			   	else printf("\n");
			   }
			}
		}
	}
	return 0;
}
