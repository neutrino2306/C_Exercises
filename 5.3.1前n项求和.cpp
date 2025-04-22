# include <stdio.h> 
int main(){
    
    int n;
	double sum=1.0,sign=1.0;
    printf("请输入n的值：");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    	sum=sum+sign/i;
    	sign=-sign;//通过添加sign，使得相邻两个表达式符号相反 
	}
    
    printf("f(%d)=%f\n",n,sum);
    return 0; 
} 
