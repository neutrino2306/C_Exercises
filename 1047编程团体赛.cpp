#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int d[1001]={0};
	for(int i=0;i<n;i++){
		int dm,p,s;
		scanf("%d-%d %d",&dm,&p,&s);
		d[dm]+=s;
	}
	int max=d[0],maxt=0;
	for(int i=1;i<1000;i++){
		if(d[i]){
			if(max<d[i]){
				maxt=i;
				max=d[i];
			}
		}
	}
	printf("%d %d",maxt,max);
	return 0;
}
