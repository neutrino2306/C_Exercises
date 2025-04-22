#include <stdio.h>

int main(){
	int count=0;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			for(int k=0;k<5&&i!=j;k++){
				if(k!=i&&k!=j){
					count++;
					printf("A=%d B=%d C=%d",i+1,j+1,k+1);
					if(count%4==0&&count){
						printf("\n");
					}
					else printf("\t");
				}
			}
		}
	}
	printf("%d",count);
	return 0;
}
