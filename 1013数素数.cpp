#include <stdio.h>
#include <math.h>

int main(){
	int m,n,count=0,c=0,c2;
	scanf("%d %d",&m,&n);
	int s[10500];
	for(int i=2;i<105000;i++){
		count=0;
	  for(int j=1;j<=sqrt(i);j++){
	  	if(i%j==0) count++;
	  }
	  if(count==1) {
	  	s[c++]=i;
	  } 
	}
	for(int i=m-1,c2=1;i<n;i++,c2++){
		if(c2%10!=0&&i<(n-1)){
			printf("%d ",s[i]);
		}
		else if(c2%10!=0&&i==n-1){
			printf("%d",s[i]);
		}
		else if(c2%10==0&&i<(n-1)){
			printf("%d\n",s[i]);
		}
		else if(c2%10==0&&i==n-1) printf("%d",s[i]);
	}
	return 0;
}
