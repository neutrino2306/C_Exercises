# include <stdio.h>
int main(){
	int x,a,b=0;
	printf("����������:\n");
	scanf("%d",&x);
    while(x>0){
    a=x%10;
	b=b*10+a;
    x=x/10;
	}
	printf("%d",b);
	return 0;
}

/*������ĩλ��Ϊ������������ҪĩλΪ�����λ�����٣����������λΪ�㣩��Ӧ������ѭ���������
while(x>0){
    a=x%10;
    printf("%d",a);
    x=x/10;
	}
	 while(x>0){
    a=x%10;
    int b=0;
	b=b+a;
    x=x/10;
	}
	printf("%d",b);*/
	
	
	
	
	
	
