# include <stdio.h>
int main(){
	int n;
	double sum=0.0,i=1,j=2,a;
	printf("请输入正整数N：\n");
	scanf("%d",&n);
	for(int count=1;count<=n;count++){
	  	a=j;
	  	sum=1.0*j/i+sum;
	  	j=i+j;
	    i=a;
	}
   printf("%.2f",sum);
	return 0;
}
