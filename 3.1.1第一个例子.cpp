#include <stdio.h>
int main()
{
   int hour1,minute1,hour2,minute2;
   printf("请输入时间1：\n");
   scanf("%d %d",&hour1,&minute1);
   printf("请输入时间2：\n");
   scanf("%d %d",&hour2,&minute2);
   int a=hour2-hour1;
   int b=minute2-minute1;
   if(b<0){
   	b=60+b;
   	a--;
   }
   printf("时间差为：%dh,%dmin",a,b);
   return 0;
}  
