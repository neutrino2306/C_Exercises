#include <stdio.h>
int main()
{
   int hour1,minute1,hour2,minute2;
   printf("������ʱ��1��\n");
   scanf("%d %d",&hour1,&minute1);
   printf("������ʱ��2��\n");
   scanf("%d %d",&hour2,&minute2);
   int a=hour2-hour1;
   int b=minute2-minute1;
   if(b<0){
   	b=60+b;
   	a--;
   }
   printf("ʱ���Ϊ��%dh,%dmin",a,b);
   return 0;
}  
