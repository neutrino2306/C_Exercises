#include <stdio.h>
#include <math.h>
int main(){
	int n,c[10001]={0};
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int s;
		scanf("%d",&s);
		c[abs(s-(i+1))]++;
	}
	for(int i=10000;i>=0;i--){
		if(c[i]>1){
			printf("%d %d\n",i,c[i]);
		}
	}
	return 0;
}
