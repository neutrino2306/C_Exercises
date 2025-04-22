#include <stdio.h>
#include <math.h>

int main(){
	int s[2000],t=0;
	for(int i=2;i<=1993;i++){
		int c=0;
		for(int j=1;j<=sqrt(i);j++){
			if(i%j==0) c++;
		}
		if(c==1) s[t++]=i;
	}
	for(int i=0;i<t;i++){
		for(int j=i+1;j<t;j++){
			if(s[j]-s[i]==1898)
			printf("%d %d\n",s[i],s[j]);
		}
	}
	return 0;
}
