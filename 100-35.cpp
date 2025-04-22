#include <stdio.h>
#include <stdlib.h>

int com(const void *a,const void *b){
	return *(int *)a-*(int *)b;
}

int main(){
	int s[10],sum=0;
	for(int i=0;i<10;i++){
		scanf("%d",&s[i]);
	}
	qsort(s,10,sizeof(s[0]),com);
	for(int i=1;i<9;i++){
		sum+=s[i];
	}
	printf("%.2f",1.0*sum/8);
	return 0;
}

