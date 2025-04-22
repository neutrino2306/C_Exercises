# include <stdio.h>
int main(){
	int a,b;
	printf("请输入两个书：\n");
	scanf("%d %d",&a,&b);
	if(a<=b){
		printf("较大数是：%d\n",b);
	}
	else{
		printf("较大数是：%d\n",a);
	}
	return 0;
	
} 
