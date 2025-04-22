# include <stdio.h> 
int main(){
    
    int a,b,n,min;
    printf("请输入两个数：");
    scanf("%d %d",&a,&b);
   /* 用枚举法计算 
     if(a<b){
    	min=a;
	}
    else min=b;
    for(int i=1;i<=min;i++){
    	if(a%i==0){
    		if(b%i==0){
    			n=i;
			}
		}
	}
    printf("两个数的最大公约数是：%d\n",n); */
   
	//用辗转相除法进行计算 
	while(b!=0){
		n=a%b;
		a=b;
		b=n;
	} 
    printf("最大公约数是：%d",a);	

    return 0; 
} 

int gcd(int a,int b){
	return b?gcd(b,a%b):a;
}

