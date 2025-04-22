#include <stdio.h>
//看到大佬思路提示  用余数  然后就自己写出来了  也算是借鉴了思路…… 
int main(){
	int m,s;
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		int flag=0,n,k;
		scanf("%d",&s);
		for(n=1;n<10;n++){
			int t=(s>999)?10000:((s>99)?1000:(s>9?100:10));
			if((n*s*s)%t==s){
				flag=1;
				printf("%d %d\n",n,n*s*s);
				break;
			}
		}
		if(!flag) printf("No\n");
	}
	return 0;
}
