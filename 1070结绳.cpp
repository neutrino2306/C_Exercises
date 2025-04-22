#include <stdio.h>
#include <stdlib.h>

int com(const void *a,const void *b);

int main(){
	int n;
	scanf("%d",&n);
	int s[n];
	for(int i=0;i<n;i++){
		scanf("%d",&s[i]);
	}
	qsort(s,n,sizeof(s[0]),com);
	float sum=s[0];
	for(int i=1;i<n;i++){
		sum=1.0*(sum+s[i])/2;
	}
	printf("%d",(int)sum);
	return 0;
}
int com(const void *a,const void *b){
	return *(int *)a-*(int *)b;
}
