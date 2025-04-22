#include <stdio.h>

int main(){
	int n,s[4];
	scanf("%d",&n);
	s[0]=n/1000;
	s[1]=n%1000/100;
	s[2]=n%100/10;
	s[3]=n%10;
	for(int i=3;i>=0;i--){
		s[i]=(s[i]+5)%10;
		printf("%d",s[i]);
	}
	return 0;
}
