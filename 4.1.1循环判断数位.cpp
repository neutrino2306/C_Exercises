# include <stdio.h>
int main(){
	int x,y=0,t; 
	printf("请输入x:\n");
	scanf("%d",&x);
	y++;
	t=x/10;
	// 一定要在循环体外先写上面这两行，否则0输入时会被判断为0位数 
	while(t>0){
		y++;
		t=t/10;
	}
	printf("%d\n",y);
	return 0;
}

