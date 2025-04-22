#include <stdio.h>

int main(){
	int n,s[11000]={0},c=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		s[i/2+i/5+i/3]++;
	}
	for(int i=0;i<11000;i++){
		if(s[i]) c++;
	}
	printf("%d",c);
	return 0;
}


