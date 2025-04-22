#include <stdio.h>
#include <stdlib.h>

void f(int n){
	int **a=(int **)malloc(sizeof(int *)*n);
	for(int i=0;i<5;i++){
		a[i]=(int *)malloc(sizeof(int)*n);
	}
  //  int *a=(int *)malloc(n*n*2);
	a[0][n/2]=1;
	for(int c=2,j=n/2,i=0;c<=n*n;c++){
		i=i-1;
		j=j+1;
		if((c-1)%n==0){
			i=i+2;
			j=j-1;
		}
		if(i<0){
			i=n-1;
		}
		if(j>n-1){
			j=0;
		}
		a[i][j]=c; 
	}
	for(int i=0,t=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d",a[i][j]);
			if(j==n-1) printf("\n");
			else printf(" ");
		}
	}
	for(int i=0;i<n;i++){
		free(a[i]);
	}
	free(a);
}

int main(){
	int n;
	printf("ÇëÊäÈën:\n");
	scanf("%2d",&n);
	f((n%2)?n:(n+1));
	return 0;
}
