#include <stdio.h>

int main(){
	int n,max=-1,m;
	scanf("%d",&n);
	int s[n+1],x,f;
	for(int i=0;i<=n;i++){
		s[i]=0;
	}
	for(int i=0;i<n;i++){
		scanf("%d %d",&x,&f);
		s[x]+=f;
	}
	for(int i=0;i<=n;i++){
	    if(s[i]>=max){
	    	max=s[i];
	    	m=i;
		}	
	}
	printf("%d %d",m,max);
	return 0;
}

