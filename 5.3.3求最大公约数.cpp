# include <stdio.h> 
int main(){
    
    int a,b,n,min;
    printf("��������������");
    scanf("%d %d",&a,&b);
   /* ��ö�ٷ����� 
     if(a<b){
    	min=a;
	}
    else min=b;
    for(int i=1;i<=min;i++){
    	if(a%i==0){
    		if(b%i==0){
    			n=i;
			}
		}
	}
    printf("�����������Լ���ǣ�%d\n",n); */
   
	//��շת��������м��� 
	while(b!=0){
		n=a%b;
		a=b;
		b=n;
	} 
    printf("���Լ���ǣ�%d",a);	

    return 0; 
} 

int gcd(int a,int b){
	return b?gcd(b,a%b):a;
}

