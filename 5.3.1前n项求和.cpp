# include <stdio.h> 
int main(){
    
    int n;
	double sum=1.0,sign=1.0;
    printf("������n��ֵ��");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    	sum=sum+sign/i;
    	sign=-sign;//ͨ�����sign��ʹ�������������ʽ�����෴ 
	}
    
    printf("f(%d)=%f\n",n,sum);
    return 0; 
} 
