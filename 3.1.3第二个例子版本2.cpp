# include <stdio.h>
int main(){
	int a,b;
	printf("请输入两个书：\n");
	scanf("%d %d",&a,&b);
	int max=a;
	if(a<=b){
		max=b;
	}
	printf("较大数是：%d\n",max);
	return 0;
	
} 
