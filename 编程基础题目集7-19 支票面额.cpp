# include <stdio.h>
int main(){
	int y,f,n,count=0;
	scanf("%d",&n);
	for(y=0;y<100;y++){
	 for(f=0;f<100;f++){
	 	if(98*f==199*y+n){
	 		printf("%d.%d",y,f);
	 		count++;
		 }
	 }
    }
	   if(count==0) printf("No Solution");
	return 0;
} 
