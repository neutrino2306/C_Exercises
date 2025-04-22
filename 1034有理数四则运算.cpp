//这道题看似很复杂要考虑带分数、负数、约分等多种情况，实际上应该注意的是，可以把输入的两个分数和最后要输出的分数看作相同类的
//这样处理的时候只要写出一套机制用于约分、分离带分数、处理负数，而只用改变输入，就可以一劳永逸了 

#include <stdio.h>
#include <math.h>
long long gys(long long a,long long b);
void f(long long a,long long b);

int main(){
	long long a1,b1,a2,b2;
	char ch[4]={'+','-','*','/'};
	scanf("%lld/%lld %lld/%lld",&a1,&b1,&a2,&b2);
	for(int i=0;i<4;i++){
		if(a1==0){
			printf("0");
		}
		else f(a1,b1);
		printf(" %c ",ch[i]);
		if(a2==0){
			printf("0");
		}
		else f(a2,b2);
		printf(" = ");
		switch(ch[i]){
			case '+':f(a1*b2+a2*b1,b1*b2);break;
			case '-':f(a1*b2-a2*b1,b1*b2);break;
			case '*':f(a1*a2,b1*b2);break;
			case '/':f(a1*b2,b1*a2);break;
		}
		if(i!=3) printf("\n");
	}
	
	return 0;
}

long long gys(long long a,long long b){
   int n;
   while(b!=0){
		n=a%b;
		a=b;
		b=n;
	} 
	return a;
}
//最大公因数的函数还可以写成 return b==0?a:gys(b,a%b); 这样更简洁 

void f(long long a,long long b){
	int s=1;
	if(a*b==0){
	  if(b==0)	printf("Inf");
	  else printf("0");
	    return ;
	}
    if(a<0||b<0){ 
        if((a>0&&b<0)||(a<0&&b>0)) s=-1;
		a=labs(a);
		b=labs(b);
	}
	long long g=gys(a,b);
	a/=g;
	b/=g;
	if(s<0){
		printf("(-");
	}
	if(a/b&&a%b){
		printf("%lld %lld/%lld",a/b,a%b,b);
	}
	else if(a%b){
		printf("%lld/%lld",a,b);
	}
	else printf("%lld",a/b);
	if(s<0) printf(")");
}


