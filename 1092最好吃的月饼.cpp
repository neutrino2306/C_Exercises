#include <stdio.h>

int main(){
	long long m,n,g,max=0;
	scanf("%lld%lld",&n,&m);
	int s[n+1]={0},flag=0;
	for(int i=0;i<m;i++){
		for(int j=1;j<n+1;j++){
			scanf("%lld",&g);
			s[j]+=g; 
		}
	}
	for(int i=1;i<n+1;i++){
		max=(s[i]>max)?s[i]:max;
	}
	printf("%lld\n",max);
	for(int i=1;i<n+1;i++){
		if(s[i]==max){
			if(!flag){
				flag=1;
				printf("%d",i);
			}
			else printf(" %d",i);
		}
	}
	return 0;
}
