#include <stdio.h>

void f(int n){
	if(n){
		printf("%d",n%10);
		f(n/10);
	}
}

int main(){
	int n;
	scanf("%d",&n);
	if(n<0){
		printf("-");
		n=-n;
	}
	f(n);
	return 0;
}
