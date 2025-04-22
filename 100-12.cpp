#include <stdio.h>
#include <math.h>
int main(){
	int n,a,b,c,d,e;
	double max=0;
	scanf("%d",&n);
	for(int i=0;i<3;i++){
		for(int j=0;j<=(20-i*8)/5;j++){
			for(int k=0;k<=(20-i*8-j*5)/3;k++){
				for(int l=0;l<=(20-8*i-5*j-k*3)/2;l++){
					int t=20-8*i-5*j-k*3-2*l;
					double w=n*pow((1+0.0063*12),t)*pow((1+2*0.0066*12),l)*pow((1+3*0.0069*12),k)*pow((1+5*0.0075*12),j)*pow((1+8*0.0084*12),i);
					if(max<w){
						max=w;
						a=t;
						b=l;
						c=k;
						d=j;
						e=i;
					}
				}
			}
		}
	}
	printf("获得利息最多的存款方式为：\n");
	printf("8年期限的存了%d次\n",e);
	printf("5年期限的存了%d次\n",d);
	printf("3年期限的存了%d次\n",c);
	printf("2年期限的存了%d次\n",b);
	printf("1年期限的存了%d次\n",a);
	printf("本息合计为：%0.2lf",max);
	return 0;
}
