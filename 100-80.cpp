#include <stdio.h>

/*
用递归求解 
int f(int n){
	if(n==10) return 1;
	else   return (2*(f(n+1)+1));
}

int main(){
	printf("第一天吃了%d个桃子",f(1));
	return 0;
}

*/

int main(){
	int x=1;
	for(int i=10;i>1;i--){
	   x=(x+1)*2;
	}
	printf("第一天吃了%d",x);
	return 0;
}

