# include <stdio.h>
int main(){
	int a,b,sum=0,count2=0;
	printf("请输入两位正整数（1<=a<=b<=500）：\n");
	scanf("%d %d",&a,&b);
	for(int i=a;i<=b;i++){
		int count1=1;
	 for(int j=2;j<i/2;j++){
		 if(i%j==0){
		 	count1=0;
		 	break;
		 }
	  }	
	  if(count1){   //这里count1代表 count1==1
	  	printf("%d ",i);
	  	count2++;
	  	sum+=i;
	  }
/*	    这是我自己写的计算素数的程序 ，但不如老师的简洁 ，不过老师的方法也有弊端，就是1输入会算是素数，那还要再补充 
    	for(int j=1;j<=i;j++){
		if(i%j==0){
	  		count1++;
		  }
	  }
		if(count1==2){
			printf("%d ",i);
			sum=sum+i;
			count2++;
		}  */
		
	}
	printf("\n%d %d",count2,sum);   
/*  这是用while语句写的版本 
	int i=a;
	while(i<=b){
		int count1=0;
		int j=1;
		while(j<=i){
			if(i%j==0){
	  		count1++;
		  }
		j++;	
		}
		if(count1==2){
			printf("%d ",i);
			sum=sum+i;
			count2++;
		}
	  i++;
	}
    printf("\n%d %d",count2,sum);  */ 
    
	return 0;
}
