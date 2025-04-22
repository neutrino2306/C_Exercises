#include <stdio.h>

int main(){
	int n;
	char c='A';
	scanf("%d",&n);
	for(int i=1;i<=n;i++,c++){
	  for(int j=n-i;j>0;j--){
	  	printf(" ");
	  }
	  for(int k=1;k<=2*i-1;k++){
	  	printf("%c",c);
	  	if(k==(2*i-1)) printf("\n");
	  }
	}
	return 0;
} 
