# include <stdio.h>
int main(){
	int x,y=0,t; 
	printf("������x:\n");
	scanf("%d",&x);
	y++;
	t=x/10;
	// һ��Ҫ��ѭ��������д���������У�����0����ʱ�ᱻ�ж�Ϊ0λ�� 
	while(t>0){
		y++;
		t=t/10;
	}
	printf("%d\n",y);
	return 0;
}

