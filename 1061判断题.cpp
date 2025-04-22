#include <stdio.h>

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int s[n][m],f[m],c[m],ss[n]={0};
	for(int i=0;i<m;i++){
		scanf("%d",&f[i]);
	}
	for(int i=0;i<m;i++){
		scanf("%d",&c[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&s[i][j]);
			if(s[i][j]==c[j]){
				ss[i]+=f[j];
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%d",ss[i]);
		if(i!=n-1) printf("\n");
	}
	return 0;
}
