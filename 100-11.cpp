#include <stdio.h>

typedef struct{
	int s,e;
	double r;
}tax;

void f(int w,tax t[7]);

int main(){
	int n,w;
	scanf("%d",&n);
	tax t[7]={{0,1500,0.03},{1500,4500,0.1},{4500,9000,0.2},{9000,35000,0.25},{35000,55000,0.3},{55000,80000,0.35},{80000,1e10,0.45}};
	for(int i=0;i<n;i++){
		printf("请输入工资：");
		scanf("%d",&w);
		if(w>3500) f(w-3500,t);
		else printf("您的个人所得税为：0\n");
	}
	return 0;
}

void f(int w,tax t[7]){
   double sh=0,m;
   for(tax *p=t;p<t+7;p++){
   	if(w>p->s){
   		m=sh;
   		if(w>p->e){
   			sh+=(p->e-p->e)*p->r;
		}
		else{
		   sh+=(w-p->s)*p->r;	
		} 
	   printf("征税范围：%d-%d\t",p->s,p->e);
	   printf("该范围内缴税金额：%6.2lf\t",sh-m);
	   printf("超出该范围的金额：%d\n",w>p->e?w-p->e:0);
	   
	   }
   }
   printf("您的个人所得税为：%6.2lf\n",sh);
}


