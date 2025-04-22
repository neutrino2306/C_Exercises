#include <stdio.h>
int main(){
	int n,s[101],score,k;
	scanf("%d",&n);
	for(int i=0;i<101;i++){
		s[i]=0;
	}
	for(int i=0;i<n;i++){
		scanf("%d",&score);
		s[score]++;
	}
	scanf("%d",&k);
	for(int i=0;i<k;i++){
		scanf("%d",&score);
		if(i!=k-1)printf("%d ",s[score]);
        else printf("%d",s[score]);
	}
	return 0;
}
