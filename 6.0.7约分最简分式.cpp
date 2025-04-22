# include <stdio.h>
int main(){
	int a,b,c,m,n;
	printf("请输入分数（分子分母中间用/分隔）：\n");
	scanf("%d/%d",&m,&n);
	a=m;
	b=n;
	while(b>0){
		c=a%b;
		a=b;
		b=c;
	}
	printf("%d/%d\n",m/a,n/a);
	return 0;
}
//约分最简分式其实就是求分子分母的最大公因数，然后分子分母分别同时除以这个最大公因数 
