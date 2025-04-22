#include <stdio.h>
#include <stdlib.h>

int com(const void *a,const void *b);

int main(){
	int n,e=1;
	scanf("%d",&n);
	int s[n];
	for(int i=1;i<=n;i++){
		scanf("%d",&s[i]);
	}
	qsort(&s[1],n,sizeof(s[1]),com);
	for(int i=1;i<=n;i++){
		if(s[i]>e){
			e++;
		}
	}
	printf("%d",e-1);
	return 0;
}

int com(const void *a,const void *b){
	int ret=*(int *)b-*(int *)a;	
	return ret;
}


