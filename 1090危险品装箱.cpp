#include <stdio.h>
#include <stdlib.h>

int com(const void *a,const void *b){
	return *(int *)a-*(int *)b;
}

int main(){
	int n,m,k;
	scanf("%d%d",&n,&m);
	int l[n][2],s[1001];
	for(int i=0;i<n;i++){
		scanf("%d%d",&l[i][0],&l[i][1]);
	}
	for(int i=0;i<m;i++){
		int flag=0;
		scanf("%d",&k);
		for(int j=0;j<k;j++){
			scanf("%d",&s[j]);
		}
		qsort(s,k,sizeof(s[0]),com);
		for(int j=0;j<n;j++){
			if(bsearch(&l[j][0],s,k,sizeof(s[0]),com)&&bsearch(&l[j][1],s,k,sizeof(s[0]),com)){
				printf("No\n");
				flag=1;
				break;
			}
		}
		if(!flag) printf("Yes\n");
		
	}
	return 0;
}
