#include <stdio.h>

int main(){
	int m,n,cr=0,cw=0;
	scanf("%d%d",&n,&m);
	int b[10000]={0};
	for(int i=0,t;i<m;i++){
		scanf("%d",&t);
		b[t]++;
	}
	for(int i=0;i<n;i++){
		char mz[5];
		int k,flag=0;
		scanf("%s%d",mz,&k);
		for(int j=0,t;j<k;j++){
			scanf("%d",&t);
			if(b[t]>0&&flag==0){
			   printf("%s: %04d",mz,t);
			   flag=1;	
			   cw++;
			}
			else if(b[t]>0&&flag==1){
				printf(" %04d",t);
				cw++;
			}
		}
		if(flag){
			cr++;
			printf("\n");
		}
	}
	printf("%d %d",cr,cw);
	return 0;
}
