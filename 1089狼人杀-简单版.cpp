#include <stdio.h>
#include <math.h>
int main(){
	int n;
	scanf("%d",&n);
	int s[n+1],a[n+1],lie[n+1],count,flag=0;
	for(int i=1;i<=n;i++){
		scanf("%d",&s[i]);
	} 
	for(int i=1;i<=n;i++){
		for(int j=1+i;j<=n;j++){
			for(int k=1;k<=n;k++){
			    a[k]=1;
		    }
			count=0;
			a[i]=a[j]=-1;
			for(int l=1;l<=n;l++){
			  if(s[l]*a[abs(s[l])]<0){
				lie[count++]=l;
			  }
			} 
			if(count==2&&a[lie[0]]*a[lie[1]]==-1){
				flag=1;
				printf("%d %d",i,j);
				goto out;
			}
		}
	}
	out:
		if(!flag) printf("No Solution");
	return 0;
}
