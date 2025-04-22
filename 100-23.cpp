#include <stdio.h>

int f(int a){
	int s=0;
	for(int i=1;i<=a/2;i++){
		if(a%i==0) s+=i;
	}
	return s;
}

int main(){
	for(int i=1;i<=3000;i++){
		if(f(f(i))==i&&f(i)>i) printf("%d\t%d\n",i,f(i));
	}
	return 0;
}
