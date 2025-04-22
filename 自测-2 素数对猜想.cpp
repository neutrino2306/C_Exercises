#include <stdio.h>
#include <math.h>

int main(){
	int n,c=0,s=0;
	scanf("%d",&n);
	int a[n];
	for(int i=2;i<=n;i++){
		int f=1;
		for(int j=2;j<=sqrt(i);j++){
			if(i%j==0){
				f=0;
				break;
			}
		}
		if(f){
			a[c++]=i;
		}
	}
	for(int i=0;i<c-1;i++){
		if(a[i+1]-a[i]==2){
			s++;
		}
	}
	printf("%d",s);
	return 0;
} 
