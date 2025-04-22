#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int com(const void *a,const void *b);

int main(){
	int N,t=0,m,n;
	scanf("%d",&N);
	int s[N];
	for(int i=0;i<N;i++){
		scanf("%d",&s[i]);
	}
	for(n=sqrt((double)N);n>0;n--){
		if(!(N%n)){         
			m=N/n;
			break;
		}
	}
	qsort(s,N,sizeof(int),com);
	int c[m][n];
	int level=m/2+m%2;
	for(int i=0;i<level;i++){
		for(int j=i;j<=n-1-i&&t<N;j++){
			c[i][j]=s[t++];
		}
		for(int j=i+1;j<=m-2-i&&t<N;j++){
			c[j][n-i-1]=s[t++];
		}
		for(int j=n-1-i;j>=i&&t<N;j--){
			c[m-1-i][j]=s[t++];
		}
		for(int j=m-2-i;j>=i+1&&t<N;j--){
			c[j][i]=s[t++];
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d",c[i][j]);
			if(j!=n-1) printf(" ");
		}
		printf("\n");
	}
	return 0;
}

int com(const void *a,const void *b){
	int ret=-1;
    if(*(int *)b==*(int *)a){
    	ret=0;
	}
	else if((*(int *)b-*(int *)a)>0){
		ret=1;
	}
	return ret;
}
