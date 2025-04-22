# include <stdio.h>
int main(){
	int price=0, bill=0;
	printf("请输入金额：\n");
	scanf("%d",&price);
	printf("请输入票面：\n");
	scanf("%d",&bill);
	if(price<=bill){
		printf("应找您：%d元\n",bill-price);
	}
	else{
		printf("请再支付：%d元",price-bill);
	 
	}
	return 0;
	
} 
