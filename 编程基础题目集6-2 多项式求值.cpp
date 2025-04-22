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
 
/* ��δ��������Լ�д�� �������Ե����ݹ���ͳ�ʱ��
   ��ʱ�Ľ��������  ��ѭ���������٣�������ѭ���ĳ�һ��ѭ�� 
double f( int n, double a[], double x ){
	double sum=0;
	for(int i=0;i<=n;i++){
		double t=1;
	   for(int j=1;j<=i;j++){  // ע������ط� j ��1��ʼ����Ϊ�����0�Ļ���x��0�η�Ӧ����1 �൱��ѭ����δ���� 
	   	t=t*x; 
	   }
	   sum=sum+a[i]*t;
	}	
	return sum; 
} */
//��ȷ�ⷨ���£� 
double f( int n, double a[], double x ){
	double sum=0;
	double t=1;
	for(int i=0;i<=n;i++){
	   sum=sum+a[i]*t;
	   t*=x;    
	}	
	return sum; 
} 
