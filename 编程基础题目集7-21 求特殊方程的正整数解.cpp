# include <stdio.h>
int main(){
	int n,x,y,count=0;
	scanf("%d",&n);
	for(x=1;x<n;x++){
	  for(y=x+1;y>x&&y<n;y++)	
		if(x*x+y*y==n){
			printf("%d %d\n",x,y); 
			count++;
		}
		
	}
	if(count==0){
		printf("No Solution");
	}
	return 0;
} 
