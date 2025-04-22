#include <stdio.h>
#include <math.h>

int main(){
	long long a,b,t;
    scanf("%lld%lld",&a,&b);
    t=pow((double)a,(double)b);
    printf("%lld",t%1000);
	return 0;
}
