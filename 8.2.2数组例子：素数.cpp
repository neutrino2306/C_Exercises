# include <stdio.h>
/*    ����˼·�����µ���������֪�������������������������������������� 
int isprime(int x,int knownprimes[],int numberofknowprimes); 
int main(){
	const int number = 10;
	int prime[number]={2};
	int count = 1;  //������   һ��ʼ�������������ֻ��2  ����count��1 
	int i = 3;
	while(count<number){
		if(isprime(i,prime,count)){
			prime[count++]=i;    //�����ر����������count��ԭֵ������count��1 
		}
		{ 
		   printf("i=%d \t count=%d\t",i,count);
		   {
		   	for( int i=0;i<number;i++){
		   		printf("%d\t",prime[i]);
			   }
			   printf("\n");
			} 
		} 
		i++;
	}
	for(int j=0;j<number;j++){
		printf("%d",prime[j]);
		if((j+1)%5) printf("\t");  //���д���ע��i�Ǵ�0��ʼ�ģ��������Ļ�Ӧ���Ǵ�1��ʼ 
		else printf("\n");
	}
	return 0;
}
int isprime(int x,int knownprimes[],int numberofknownprimes){
	int ret = 1;  //�����жϵ�һ���� 
	int i;
	for(i=0;i<numberofknownprimes;i++){   //˼·���������ֳ�����֪��������������������˵�������ֲ������� 
		if(x%knownprimes[i]==0);{        //�����numberofknowprimes��Ϊ�˱��������Ԫ��  ʹ������ÿ����֪�������ܱ�x��һ�� 
		ret=0;                            //i=0����Ϊ����ĵ�һ��Ԫ����prime[0]
		break;
		}
	}
	return ret;
}
*/

//�������Լ�д�ģ��ð����ǳ���д�ģ� 
int main(){
int f(int k,int a[],int c);
const int number=10;
int prime[number]={2};
int count=1;
int i=3;

while(count<number){
  if(f(i,prime,count)){
  	prime[count]=i;
  	count++;
  }
  {
  	printf("i=%d count=%d\t",i,count);
  	for(int a=0;a<number;a++){
  		printf("%d\t",prime[a]);
	  }
	  printf("\n");
  }
  i++;	
}
for(int j=0;j<number;j++){
	printf("%d",prime[j]);
	if((j+1)%5==0){
	printf("\n"); 
	} 
	else  printf("\t");
}
return 0;
}

int f(int k,int a[],int c){
	int ret=1;
	for(int t=0;t<c;t++){
		if(k%a[t]==0){
			ret=0;
			break;
		}
	}
	return ret;
}
