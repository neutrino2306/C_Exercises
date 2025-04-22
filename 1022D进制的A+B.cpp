#include <stdio.h>
#include <math.h>

int main(){
	int a,b,d,count=0;
	scanf("%d %d %d",&a,&b,&d);
	int n=a+b,s[50]={0};
    for(int i=0;n>0;i++){
    	s[i]=n%d;
    	n=n/d;
    	count++;
	}
	for(int i=count-1;i>=0;i--){
		printf("%d",s[i]);
	}
	return 0;
}
