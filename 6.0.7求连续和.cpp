# include <stdio.h>
int main(){
	int a,n,sum=0,count=0;
	printf("������������a �� n ��\n");
	scanf("%d %d",&a,&n);
	for(int i=1;i<=n;i++) {
		
		sum=sum*10+a;
		count+=sum;
	}
	printf("%d",count);
	
	return 0;
} 
