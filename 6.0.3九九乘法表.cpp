# include <stdio.h>
int main(){
	
	int n,count;
	printf("请输入任意一位正整数：\n");
	scanf("%d",&n);
	for( int j=1;j<=n;j++){
		count=1;
      for( int i=1;i<=j;i++){
      	
      		if(i*j/10>0){
      	      printf("%d*%d=%d ",i,j,i*j);
      	  }
      	  else{
      	  	 printf("%d*%d=%d  ",i,j,i*j);
			}
        }
		printf("\n"); 
	} 
/*  这是用while语句写的，肯定还是for语句更简洁 
	int j=1;
	while(j<=n){
		int count=1;
		int i=1;
		while(i<=j){
      		if(i*j/10>0){
      	      printf("%d*%d=%d ",i,j,i*j);
      	  }
      	  else{
      	  	 printf("%d*%d=%d  ",i,j,i*j);
			}
      	i++;
		}
		printf("\n");
		j++;
	}   */ 
	return 0;
} 
