#include <stdio.h>

int main(){
	int a[3][3]={1,2,3,4,5,6,7,8,9};
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d",a[i][j]);
            if(j==2) printf("\n");
            else printf(" ");
		}
	}
	printf("\n");
	for(int i=0;i<3;i++){
		for(int j=0,t;j<3;j++){
			if(i!=j&&j>i){
				t=a[i][j];
				a[i][j]=a[j][i];
				a[j][i]=t;
			}
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d",a[i][j]);
			if(j==2) printf("\n");
            else printf(" ");
		}
	}
	return 0;
}
