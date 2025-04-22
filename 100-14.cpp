#include <stdio.h>

int main(){
	int count=0;
	printf("ºÚÇò\tºìÇò\t°×Çò\n");
	for(int i=0;i<=6;i++){
		for(int j=0;j<=3;j++){
			for(int k=0;k<=3;k++){
				if(i+j+k==8){
					count++;
					printf("%d\t%d\t%d\n",i,j,k);
				}
			}
		}
	}
	printf("%d",count);
	return  0;
}
