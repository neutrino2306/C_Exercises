# include <stdio.h> 
int main(){
	int n; 
	printf("������������n��ֵ��3<=n<=7����");
    scanf("%d",&n);
    int mask=1; 
    for(int b=1;b<n;b++){
    	mask*=10; 
	}
	for(int v=mask;v<mask*10;v++){
		int t=v;
		int sum=0;
		do{
		 int a=t%10;
		 int p=a;  //ע��  ����Ҫ����һ��p ��Ȼa=a*a�ʹ��� 
		 for(int j=1;j<n;j++){
		 	p*=a;  //p��Ϊ����ÿһλ�����ݵı����������a�Ļ����ڶ��ξ����Ĵη��������η� 
		 }
		t/=10;	
		sum=sum+p;
	
		}while(t>0);
			if(sum==v){
			printf("%d\n",v);
		}
 }
	return 0;
} 	
