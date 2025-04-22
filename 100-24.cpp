#include <stdio.h>
#include <math.h>

int f(long long a){
	int c=0;
	while(a){
		a/=10;
		c++;
	}
	return c;
}

int main(){
	for(long long i=1;i<=100000;i++){
		long long s=pow(i,2);
		s=s%((int)pow(10,f(i)));
		if(s==i) printf("%lld\n",i);
	}
	return 0;
}
