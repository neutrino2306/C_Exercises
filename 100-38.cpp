#include <stdio.h>
#include <math.h>

int main(){
	int a,b,count=0;
	scanf("%d%d",&a,&b);
	for(int i=a,c=0;i<b+1;i++){
		for(int j=1;j<=sqrt(i);j++){
			if(i%j==0) c++;
		}  
		if(c==1&&i!=1){
		  printf("%d",i);
		  count++;	
		  if(count%4) printf("\t");
		  else printf("\n");
		}
		c=0;
	}
	printf("\n%d",count);
	return 0;
}
