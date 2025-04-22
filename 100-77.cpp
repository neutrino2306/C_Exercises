#include <stdio.h>

int age(int n){
    int t;
	if(n==1) t=10;
	else{
	    t=age(n-1)+2;
	} 
	return t;
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",age(n));
	return 0;
}
