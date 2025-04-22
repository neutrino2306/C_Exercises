# include <stdio.h>
int main(){
	int m=34,n=5,count=0,a;
	printf("%d %d\n",m,n) ;
	printf("请输入猜的数：\n");
	scanf("%d",&a);
	count++;
	for(;a!=m;){
     if(a<0){
     	printf("Game over\n");
     	break;
	 }
	 else{
	  if(m-a>0){
	  	printf("Too small\n");
	  }
	  else{
	  	printf("Too big\n");
	  }
     }
     count++;
     if(count>n){
       printf("Game over\n");
       break;
	 }
	 else{
	 printf("请再输入数字：\n");
	 scanf("%d",&a);
     }
	}
	if(a>0){
    if(count==1){
    	printf("Bingo!");
	}
	else if(count<3){
		printf("Lucky you!");
	}
	else if(count<n){
		printf("Good guess!");
	}
   }
	return 0;
}
