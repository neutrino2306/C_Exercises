#include <stdio.h>
int main(){

int t1,t,a,b,c,d;
    printf("������ʱ��ͷ�������\n");
    scanf("%d %d",&t1,&t);
    a=t1/100;
    b=t1%100;
    b=a*60+b+t;
    c=b/60;
    d=b%60;
    
    
    printf("%d%d\n",c,d );
    return 0;}
