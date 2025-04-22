#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
    double s[n],sum=0.0;
	for(int i=0;i<n;i++){
		scanf("%lf",&s[i]);
		sum+=s[i]*(i+1)*(n-i);
	}
	printf("%.2lf",sum);
	return 0;
} 
