# include <stdio.h> 
int main(){
	int n; 
	printf("请输入正整数n的值（3<=n<=7）：");
    scanf("%d",&n);
    int mask=1; 
    for(int b=1;b<n;b++){
    	mask*=10; 
	}
	for(int v=mask;v<mask*10;v++){
		int t=v;
		int sum=0;
		do{
		 int a=t%10;
		 int p=a;  //注意  这里要另设一个p 不然a=a*a就错了 
		 for(int j=1;j<n;j++){
		 	p*=a;  //p作为保存每一位数的幂的变量，如果是a的话，第二次就是四次方而非三次方 
		 }
		t/=10;	
		sum=sum+p;
	
		}while(t>0);
			if(sum==v){
			printf("%d\n",v);
		}
 }
	return 0;
} 	
