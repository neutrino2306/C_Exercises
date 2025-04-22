# include <stdio.h>
int main(){
	int x,y=0,t=0; 
	printf("请输入数字:\n");
	scanf("%d",&x);
	while(x!=-1){
	y++;	
	t=t+x;
	scanf("%d",&x);
	}
	printf("平均数是：%f\n",1.0*t/y);
	return 0;
}
/* 用do while 语句解决：
   do {
   	scanf("%d",&x);
   	if(x!=-1){
   		y++;
   		t=t+x;
	   }
   }while(x!=-1);*/
