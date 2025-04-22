#include <stdio.h>

int main(){
	int n,a,b;
	scanf("%d",&n);
	a=n/100;
	for(int i=0;i<a;i++) printf("B");	
	b=(n-a*100)/10;
	for(int i=0;i<b;i++) printf("S");	
    for(int i=1;i<=n%10;i++) printf("%d",i);
	return 0;
}
