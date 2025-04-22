#include <stdio.h>
#include <math.h>

int main(){
	int s[9999],t=0;
	for(int i=1000,c=0;i<10000;i++){
		for(int j=1;j<=sqrt(i);j++){
			if(i%j==0) c++;
		}
		if(c==1) s[t++]=i;
		c=0;
	}
	for(int i=0;i<t;i++){
		int k=s[i],sum=0;
		while(k){
			sum=sum*10+k%10;
			k/=10;
		}
		for(int j=0;j<t;j++){
			if(sum==s[j])
			printf("%d %d\n",s[i],sum);
		}
	}
	return 0;
}
