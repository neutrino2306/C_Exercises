#include <stdio.h>
int main(){
	int m,n,a,b,t;
	scanf("%d%d%d%d%d",&m,&n,&a,&b,&t);
	for(int i=1,s;i<=m*n;i++){
		scanf("%d",&s);
		if(s>=a&&s<=b){
			printf("%03d",t);
		}
		else printf("%03d",s);
		if(i%n==0){
			printf("\n");
		}
		else printf(" ");
	}
	return 0;
}
