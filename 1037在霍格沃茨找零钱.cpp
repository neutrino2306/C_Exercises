#include <stdio.h>
#include <math.h>

int main(){
	int pg,ps,pk,ag,as,ak,zg,zs,zk;
	scanf("%d.%d.%d %d.%d.%d",&pg,&ps,&pk,&ag,&as,&ak);
	const int g=17*29,s=29;
	long long p=pg*g+ps*s+pk,a=ag*g+as*s+ak;
	long long pa=labs(p-a);
	zg=pa/g;
	zs=(pa%g)/s;
	zk=pa%s;
	if(p<=a){
		printf("%d.%d.%d",zg,zs,zk);
	}
	else printf("-%d.%d.%d",zg,zs,zk);
	return 0;
}
