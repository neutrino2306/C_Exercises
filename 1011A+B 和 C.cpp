#include <stdio.h>

typedef struct{
	long long a;
	long long b;
	long long c;
}num;

int main(){
	int n;
	scanf("%d",&n);
	num s[n];
	for(int i=0;i<n;i++){
		scanf("%lld %lld %lld",&s[i].a,&s[i].b,&s[i].c);
	}
	for(int i=0;i<n;i++){
		if((s[i].a+s[i].b)>s[i].c){
			printf("Case #%d: true",i+1);
		}
		else  printf("Case #%d: false",i+1);
		if(i!=(n-1)) printf("\n");
	}
	
	return 0;
}
