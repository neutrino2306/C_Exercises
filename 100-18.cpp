#include <stdio.h>

int main(){
	int a[14]={0},n=1;
	for(int i=1;i<=13;i++){
		for(int j=0;;){
			if(!a[n]){
			   j+=1;
			   if(j==i){
			   	a[n]=i;
			   	break;
			   }
			}
			n+=1;
			if(n==14) n=1;
		}
	}
	for(int i=1;i<=13;i++) {
		printf("%d ",a[i]);
	}
	return 0;
}
