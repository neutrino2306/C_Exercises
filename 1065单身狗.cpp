#include <stdio.h>

int main(){
	int n,count=0;
	scanf("%d",&n);
	int c[n][2],d[100000]={0};
	for(int i=0;i<n;i++){
		scanf("%d%d",&c[i][0],&c[i][1]);
	}
	int m;
	scanf("%d",&m);
    for(int i=0,t;i<m;i++){
    	scanf("%d",&t);
    	d[t]++;
	}
	for(int i=0;i<n;i++){
		if(d[c[i][0]]&&d[c[i][1]]){
			d[c[i][0]]=0;
			d[c[i][1]]=0;
			m-=2;
		}
	}
	printf("%d\n",m);
	for(int i=0;i<100000;i++){
		if(d[i]){
			printf("%05d",i);
			if(--m) printf(" ");
		}
	}
	return 0;
}
