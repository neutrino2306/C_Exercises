# include <stdio.h>
int main(){
	int n,i;
	printf("请输入n的值："); 
	scanf("%d",&n); 
	int x=1;
	/*这一段采用i递减的方式计算阶乘 
	for(i=n;i>0;i--){
		x=x*i;
	} */
	for(i=1;i<=n;i++){
		x=x*i;
	}
	printf("%d!=%d",n,x);
	return 0;
}      


//  n  i  x
/*  5  1  1
    5  2  2
    5  3  6
    5  4  24
    5  5  120
    5  6  120（不进入循环） 

*/ 
