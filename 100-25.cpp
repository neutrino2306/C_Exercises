#include <stdio.h>

int main(){
	for(long long i=1;i<=100000;i++){
		long long t=i>9999?100000:(i>999?10000:(i>99?1000:(i>9?100:10)));
		if(i*i%t==i) printf("%lld\t",i);
	}
	return 0;
}
