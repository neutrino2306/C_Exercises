# include <stdio.h>
int main(){
	int a,b,c,m,n;
	printf("��������������ӷ�ĸ�м���/�ָ�����\n");
	scanf("%d/%d",&m,&n);
	a=m;
	b=n;
	while(b>0){
		c=a%b;
		a=b;
		b=c;
	}
	printf("%d/%d\n",m/a,n/a);
	return 0;
}
//Լ������ʽ��ʵ��������ӷ�ĸ�����������Ȼ����ӷ�ĸ�ֱ�ͬʱ�������������� 
