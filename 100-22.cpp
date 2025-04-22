#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d",&n);
	for(int s=1;s<=n;s++){
	  int c=0;
	  for(int i=1;i<=s/2;i++){
	  	if(s%i==0) c+=i;
	  }
	  if(c==s) printf("%dÊÇÍêÊý\n",s);
	}
	return 0;
}
