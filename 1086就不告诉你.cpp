#include <stdio.h>
int main(){
	int a,b,flag=0;
	scanf("%d%d",&a,&b);
	for(long long n=a*b;n;n/=10){
		if(!n%10&&!flag){
			while(!(n%10)) n/=10;
		}
		if(n%10||flag){
			flag=1;
			printf("%d",n%10);
		}
	}
	return 0;
}

