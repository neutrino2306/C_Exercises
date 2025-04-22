/*  这是参考的版本，用数学方法解决，但明显过于繁琐而且思维难度较高，需要总结归纳找到规律
    不适用我，因为规律太复杂了实际上并不能很快想出来 
# include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int x=n;
	for(int i=0;i<n;i++){
		a[i]=1+i;
	}
	
	for(int k=1;k<=x-3;k++){ 
	 for(int j=0;j<x;j++){
	 	if(a[j]==3){
	 		int t=0;
	 	  for(t=0;t<x;t++){
	 	  	if(a[t]<a[j]){
	 	  		a[t]=a[t]+n-a[j];
			   }
			else if(a[t]>a[j]){
				a[t]=a[t]-a[j];
			}
		   }
		   a[j]=-1000000;
		   n--;
		   break;
		 }
	 }
	} 
	if(x==1){
		printf("%d",x);
	}
	for(int i=0;i<x;i++){
		if(a[i]==2){
			printf("%d",i+1);
		}
	}
	return 0;
}
*/



# include <stdio.h>
  int main(){
  	int n,x,count1=0;
  	scanf("%d",&n);
  	x=n;
  	int count2=n;   //这里需要两个计数器，一个是控制循环继续的count2，一个是统计数数的count1 
  	int a[n];
  	for(int i=0;i<n;i++){
  		a[i]=1;
	  }
	while(count2>1){
  	for(int i=0;i<n;i++){
  		if(a[i]){
  			count1++;  //把每一轮数数分开，其实count1的运作规律就显而易见了 
  			if(count1==3){   //吧每一次数到3当做一轮，这样就能化繁为简逐步解决 
  				a[i]=0;
  				count1=0;
  				count2--;   //每淘汰一个就减掉一只猴子 ，直到剩下最后一个 
			}
		}
		else continue;   //当碰到之前淘汰的，略过去就好了 
	 }
   } 
	 for(int i=0;i<n;i++){
	 	if(a[i]){
	 		printf("%d",i+1);
		 }
	 }
   	return 0;
  }
  
  
  
  
  
