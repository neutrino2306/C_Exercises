#include <stdio.h>

/*
�õݹ���� 
int f(int n){
	if(n==10) return 1;
	else   return (2*(f(n+1)+1));
}

int main(){
	printf("��һ�����%d������",f(1));
	return 0;
}

*/

int main(){
	int x=1;
	for(int i=10;i>1;i--){
	   x=(x+1)*2;
	}
	printf("��һ�����%d",x);
	return 0;
}

