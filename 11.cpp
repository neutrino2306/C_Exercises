#include <stdio.h>

int main()
{
    int m,n,t;
    printf("�����볤�ȣ�cm��\n");
    scanf("%d",&t);
    m=t/30.48;
    n=((t/30.48)-m)*12;
    
    
    printf("%d %d\n",m,n );
	return 0;
}

