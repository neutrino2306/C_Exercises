#include <stdio.h>

int main(){
	int n,count=0,s,sum,c[37]={0};
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&s);
        for(sum=0;s;s/=10){
        	sum+=s%10;
		}
        c[sum]++;	
	} 
	for(int i=0;i<37;i++){
		if(c[i]){
			count++;
		}
	}
	printf("%d\n",count);
	for(int i=0;i<37;i++){
		if(c[i]--){
			printf("%d",i);
			if(--count) printf(" ");
		}
		
	}
	return 0;
}
