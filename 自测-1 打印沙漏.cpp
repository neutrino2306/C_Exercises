#include <stdio.h>

int main(){
	int n,s=1,r,l=1;
	char a;
	scanf("%d %c",&n,&a);
	n-=1;
	for(int i=2;;i++){
	  s+=(2*i-1)*2;
	  r=n-s;
	  l++;
	  if(r<0){
	  	s-=(2*i-1)*2;
	  	r=n-s;
	  	l--;
	  	break;
	  }
	}
	for(int i=l;i>1;i--){
		for(int j=0;j<l-i;j++){
			printf(" ");
		}
		for(int j=0;j<2*i-1;j++){
			printf("%c",a);
		}
		printf("\n");
	}
	for(int i=1;i<=l;i++){
		for(int j=0;j<l-i;j++){
			printf(" ");
		}
		for(int j=0;j<2*i-1;j++){
			printf("%c",a);
		}
		printf("\n");
	}
	printf("%d",r+1);
	return 0;
} 
