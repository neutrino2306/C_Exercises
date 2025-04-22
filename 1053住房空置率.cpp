/* 
#include <stdio.h>

int main(){
	int n,d,pe=0,ee=0;
	double e,p;
	scanf("%d%lf%d",&n,&e,&d);
	for(int i=0;i<n;i++){
		int l=0,k;
		scanf("%d",&k);
		for(int j=0;j<k;j++){
			scanf("%lf",&p);
			if(p<e){
				l++;
			}
		}
		if(k>d&&l>(k/2)){
			ee++;
		}
		else if(l>(k/2)){
			pe++;
		}
	}
	printf("%.1lf%% %.1lf%%",100.0*pe/n,100.0*ee/n);
	return 0;
} 
*/

//第一次尝试了一下malloc函数 感觉还挺好用 

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,d,ee=0,pe=0;
	double e;
	scanf("%d%lf%d",&n,&e,&d);
	for(int i=0;i<n;i++){
		int k,l=0;
		scanf("%d",&k);
		double *p=(double *)malloc(sizeof(double)*k);
		for(int j=0;j<k;j++){
			scanf("%lf",&p[j]);
		}
		for(int j=0;j<k;j++){
			if(p[j]<e){
				l++;
			}
		}
		if(k>d&&l>(k/2)){
			ee++;
		}
		else if(l>(k/2)){
			pe++;
		}
		free(p);
	}	
	printf("%.1lf%% %.1lf%%",100.0*pe/n,100.0*ee/n);
	return 0;
}


