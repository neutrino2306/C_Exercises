# include <stdio.h>
int main(){
	int x,a,b=0;
	printf("请输入数字:\n");
	scanf("%d",&x);
    while(x>0){
    a=x%10;
	b=b*10+a;
    x=x/10;
	}
	printf("%d",b);
	return 0;
}

/*以上是末位不为零的情况，若是要末位为零而数位不减少（即倒序后首位为零），应用以下循环和输出：
while(x>0){
    a=x%10;
    printf("%d",a);
    x=x/10;
	}
	 while(x>0){
    a=x%10;
    int b=0;
	b=b+a;
    x=x/10;
	}
	printf("%d",b);*/
	
	
	
	
	
	
