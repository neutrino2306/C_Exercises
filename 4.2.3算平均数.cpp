# include <stdio.h>
int main(){
	int x,y=0,t=0; 
	printf("����������:\n");
	scanf("%d",&x);
	while(x!=-1){
	y++;	
	t=t+x;
	scanf("%d",&x);
	}
	printf("ƽ�����ǣ�%f\n",1.0*t/y);
	return 0;
}
/* ��do while �������
   do {
   	scanf("%d",&x);
   	if(x!=-1){
   		y++;
   		t=t+x;
	   }
   }while(x!=-1);*/
