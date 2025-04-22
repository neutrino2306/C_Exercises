#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int com(const void *a,const void *b){
	return *(int *)b-*(int *)a;
}

int main(){
	long long n,h,j;
	
	scanf("%lld",&n);
	for(int k=0;;k++){
		long long max=0,min=0;
		int s[10000]={0},c=0;
		while(n){
		s[c++]=n%10;
		n/=10;
    }
	qsort(s,c,sizeof(s[0]),com);
	for(int i=0,t=c-1;t<c,t>=0;i++,t--){
		max=max*10+s[i];
		min=min*10+s[t];
	}
	j=max-min;
	if(h==j&&k){
		printf("%lld",j);
		break;
	}
	else{
		h=j;
		n=j;
	}
	}
	
	return 0;
}


