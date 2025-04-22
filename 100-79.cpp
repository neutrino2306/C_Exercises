#include <stdio.h>

void f(int n,char a,char b,char c){
	if(n==1){
		printf("move dish 1 from %c to %c\n",a,c);
	}
	else{
		f(n-1,a,c,b);
		printf("move dish %d from %c to %c\n",n,a,c); 
		f(n-1,b,a,c);
	}	
}

int main(){
	int n;
	scanf("%d",&n);
	f(n,'A','B','C'); 
	return 0;
}
