# include <stdio.h>
# include <stdlib.h>
# include <time.h>
int main(){
	scrand(time(0));
	int n=rand();
	n=n%100;
	int x,c=0; 
	do{
		printf("���������֣�\n");
		scanf("%d",&x);
		c++;
		if(x>n){
		printf("����������ƫ��\n");
		}
	else if(x<n){
		printf("����������ƫС��\n");
		}
			} 
	while(x!=n);
	printf("��ϲ����ˣ�һ������%d��\n",c);
	return 0;
}
