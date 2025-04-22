#include <stdio.h>
#include <math.h>
int p(int a){
	int ret=0,c=0;
	for(int i=1;i<=sqrt(a);i++){
		if(a%i==0) c++;
	}
	if(c==1) ret=1;
	return ret;
}

int main(){
	int n;
	scanf("%d",&n);
	for(int i=11;i<=n;i++){
		if(p(i)){
		  int k=i,s=0;
		  while(k){
		  	s=s*10+k%10;
		  	k/=10;
		  }
		  if(s==i) printf("%d\n",i);
		}
	}
	return 0;
}
