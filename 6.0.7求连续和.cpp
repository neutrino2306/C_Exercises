# include <stdio.h>
int main(){
	int a,n,sum=0,count=0;
	printf("请输入两个数a 和 n ：\n");
	scanf("%d %d",&a,&n);
	for(int i=1;i<=n;i++) {
		
		sum=sum*10+a;
		count+=sum;
	}
	printf("%d",count);
	
	return 0;
} 
