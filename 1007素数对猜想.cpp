#include <stdio.h>
#include <math.h>
int main(){
	int n,count=0,count3=0;
	scanf("%d",&n);
	int a[n];
	for(int i=2;i<=n;i++){
	 int  count2=0;
	  for(int j=1;j<=sqrt(i);j++){
	  	if(i%j==0){
	  		count2++;
		  }
	  }
	  if(count2<2){
	  	a[count]=i;
	  	count++;
	  }
	}
	for(int i=1;i<count;i++){
	 if(a[i-1]+2==a[i]) count3++;
	}
	printf("%d",count3);
	return 0;
}
