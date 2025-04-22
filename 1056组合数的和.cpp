#include <stdio.h>

int main(){
	int n,sum=0,s;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&s);
		sum+=s*(n-1)*11;
	}
    printf("%d",sum);
	return 0;
}
