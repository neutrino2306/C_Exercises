# include <stdio.h>
# include <stdlib.h>
# include <time.h>
int main(){
	scrand(time(0));
	int n=rand();
	n=n%100;
	int x,c=0; 
	do{
		printf("请输入数字：\n");
		scanf("%d",&x);
		c++;
		if(x>n){
		printf("所输入数字偏大。\n");
		}
	else if(x<n){
		printf("所输入数字偏小。\n");
		}
			} 
	while(x!=n);
	printf("恭喜答对了，一共猜了%d次\n",c);
	return 0;
}
