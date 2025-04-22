#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	char p,q;
	for(int i=0;i<n;i++){
	  for(int j=0;j<4;j++){
	  	scanf("%c-%c",&p,&q);
	  	if(q=='T'){
	  		printf("%d",p-'A');
		  }
	  } 
	}
	return 0;
} 

