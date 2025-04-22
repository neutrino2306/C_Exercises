#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(i%2==1&&i%3==2&&i%5==4&&i%6==5&&i%7==0){
			printf("%d\t",i);
		}
	}
	return 0;
}
