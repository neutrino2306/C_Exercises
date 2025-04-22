//   这一版的思路是：
//   1、令x为2
//   2、将2x、3x、4x、直至ax<n的数标记为非素数
//   3、令x为下一个没有被标记为非素数的数，重复步骤2，直到所有的数都已经尝试完毕 
//     伪代码如下：
//	 1.开辟prime[n],初始化其所有元素为1,prime[x]==1表示x为素数
//	 2.令x=2
//	 3.若x为素数,则对于(i=2;x*i<n;i++),令prime[i*x]=0
//	 4.令x++,若x<n,重复步骤3,否则结束
# include <stdio.h>
int main(){
	int n=25;
	int prime[n]; 
	for(int i=0;i<n;i++){
		prime[i]=1;
	}
	for(int x=2;x<n;x++){
		if(prime[x]){
		
	  for(int j=2;j*x<n;j++){
	  	prime[j*x]=0;
	  }
	  }
	}
	for(int t=2;t<n;t++){
		if(prime[t]){
			printf("%d\t",t);
		}
	}

	return 0;
}
                
