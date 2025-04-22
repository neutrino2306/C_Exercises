#include <stdio.h>

int main(){
	int n,l=0,a,flag=0;
	scanf("%d",&n);
	int s[n],h=n-1;
	for(int i=0;i<n;i++){
		scanf("%d",&s[i]);
	}
	scanf("%d",&a);
	while(l<=h){
	   int m=(h+l)/2;
	   if(a<s[m]){
	   	  h=m-1;
	   }
	   else if(a>s[m]){
	   	  l=m+1;
	   }
	   else {
	   	flag=m;
	   	break;
	   }
	}
	if(flag) printf("%d",flag);
	else printf("Not Found");
	return 0;
}
