# include <stdio.h> 
int main(){
	
	int x;
	int a,b,c;
	int exit=0;
	printf("�������Ԫ����"); 
	scanf("%d",&x);
/*	for(c=1;c<(x*10);c++){
		for(b=1;b<(x*10/2);b++){
			for(a=1;a<(x*10/5);a++){
				if(c*1+b*2+a*5==x*10){
					printf("%d��1�Ǽ�%d��2�Ǽ�%d��5�ǵ���%dԪ\n",c,b,a,x);
					exit=1;
					break;  breakֻ������һ��ѭ����Ҫ����������ѭ������Ҫ���������ʹ���ڴ���break��������ʱ�ı�ֵ 
				}
			
			}
				if(exit==1) break;  Ȼ������������ѭ����ʹ��if��䣬�������ı�ֵ��Ϊ����ѭ�����ж����� 
		}
			if(exit==1) break;
	} */
	for(c=1;c<(x*10);c++){
		for(b=1;b<(x*10/2);b++){
			for(a=1;a<(x*10/5);a++){
				if(c*1+b*2+a*5==x*10){
					printf("%d��1�Ǽ�%d��2�Ǽ�%d��5�ǵ���%dԪ\n",c,b,a,x);
					exit=1;
					goto out;//ʹ��goto��䣬ֱ������ out���ڵĵط����Ӷ�ʵ����������ѭ�� 
				}
			
			}
		}
	} 
	out;
	return 0;
}
