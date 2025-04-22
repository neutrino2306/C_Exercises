#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct{
	int h;
	char mz[9];
}stu;

int com(const void *a,const void *b){
	stu *p=(stu *)a,*q=(stu *)b;
	int ret=strcmp(p->mz,q->mz);
	if(p->h-q->h) ret=q->h-p->h;
	return ret;
}

int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int c=n/k,d=n/k+n%k,b[c][k],t=0;
	stu a[n];
	for(int i=0;i<n;i++){
		scanf("%s %d",a[i].mz,&a[i].h);
	}
	qsort(a,n,sizeof(a[0]),com);
	for(int i=0;i<k;i++){
		for(int m=(!i)?d:c,j=0,p=m/2,flag=1;j<m;j++,flag*=-1){
			b[i][p+=j*flag]=t++;
		}
	}
	for(int i=0;i<k;i++){
		for(int m=(!i)?d:c,j=0;j<m;j++){
			printf("%s%s",a[b[i][j]].mz,j==m-1?"\n":" ");
		}
	}
	return 0;
}



