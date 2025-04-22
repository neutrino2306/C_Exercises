#include <stdio.h>

#define MAXN 10

double f( int n, double a[], double x );

int main()
{
    int n, i;
    double a[MAXN], x;

    scanf("%d %lf", &n, &x);
    for ( i=0; i<=n; i++ )
        scanf("%lf", &a[i]);
    printf("%.1f\n", f(n, a, x));
    return 0;
}
 
/* 这段代码是我自己写的 但很明显当数据过大就超时了
   超时的解决方法是  把循环数量减少，即两个循环改成一个循环 
double f( int n, double a[], double x ){
	double sum=0;
	for(int i=0;i<=n;i++){
		double t=1;
	   for(int j=1;j<=i;j++){  // 注意这个地方 j 从1开始，因为如果是0的话，x的0次方应该是1 相当于循环并未启动 
	   	t=t*x; 
	   }
	   sum=sum+a[i]*t;
	}	
	return sum; 
} */
//正确解法如下： 
double f( int n, double a[], double x ){
	double sum=0;
	double t=1;
	for(int i=0;i<=n;i++){
	   sum=sum+a[i]*t;
	   t*=x;    
	}	
	return sum; 
} 
