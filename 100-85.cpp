#include <stdio.h>

/*
int c(int x,int y){
    return (y==1||y==x)?1:(c(x-1,y-1)+c(x-1,y));
}

int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			printf("  ");
		}
		for(int j=0;j<=i;j++){
			printf("%4d",c(i+1,j+1));
		}
		printf("\n");
	}
	for(int i=n-2;i>=0;i--){
		for(int j=0;j<n-i;j++){
			printf("  ");
		}
		for(int j=0;j<=i;j++){
			printf("%4d",c(i+1,j+1));
		}
		printf("\n");
	}
	return 0;
}

*/

int main(){
   int n;
   scanf("%d",&n);
   int a[n][n]={0};
   for(int i=0;i<n;i++){
   	for(int j=0;j<=i;j++){
   		if(j==0||j==i||i==0||i==1) a[i][j]=1;
   		else a[i][j]=a[i-1][j-1]+a[i-1][j];
	   }
   }
   for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			printf("  ");
		}
		for(int j=0;j<=i;j++){
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
   return 0;	
}

