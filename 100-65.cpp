#include <stdio.h>

int main(){
	int a[11]={0},n=0;
	for(int i=0;i<1000;i++){
		n+=(i+1);
		a[n%10]=1;
	}
	for(int i=1;i<10;i++){
		if(!a[i])  printf("%d\t",i);
	}
	return 0;
}
