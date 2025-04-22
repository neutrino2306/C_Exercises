#include <stdio.h>
int main()
{
  int a,b,c,d,e;
  printf("ÇëÊäÈëÊı×Ö:\n");
  scanf("%d",&a);
  b=a/100;
  c=(a-b*100)/10;
  d=a-b*100-c*10;
  e=d*100+c*10+b;
  printf("%d",e);
  return 0;
}  
