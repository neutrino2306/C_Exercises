#include <stdio.h>
int c=0,n,a[30];

void dfs(int num,int l,int s){
	if(s==n){
		c++;
		printf("%d=%d",n,a[0]);
		for(int i=1;i<l;i++){
			printf("+%d",a[i]);
		}
		if(c%4==0&&c>0){
			printf("\n");
		}
		else if(num!=n){
			printf(";");
		}
		return ;
	}
	if(s>n) return;
	if(s<n){
		for(int i=num;i<=n;i++){
			a[l]=i;
			dfs(i,l+1,s+i);
		}
	}
	
}

int main(){
	scanf("%d",&n);
	dfs(1,0,0);
	return 0;
}


