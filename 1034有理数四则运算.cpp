//����⿴�ƺܸ���Ҫ���Ǵ�������������Լ�ֵȶ��������ʵ����Ӧ��ע����ǣ����԰�������������������Ҫ����ķ���������ͬ���
//���������ʱ��ֻҪд��һ�׻�������Լ�֡����������������������ֻ�øı����룬�Ϳ���һ�������� 

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
//��������ĺ���������д�� return b==0?a:gys(b,a%b); ��������� 

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


