# include <stdio.h> 
int main(){
    
    int n,t,mask=1,s=0;
    printf("������n��ֵ��");
    scanf("%d",&n);
    t=n; 
 /*  ��һ����ͨ���Ȱ�n��ֵ�ȵ�������Ȼ������������ķ���������ֽ�
     ������700�����������ֻ��Ϊ7��������ȫ������ ��������·��ĳ��� 
    do{
		s=s*10+n%10;
    	n/=10;
    	
	}while(n>0); 
	do{ int a=0;
		a=s%10;
		if(s>9){printf("%d ",a);
		}
		else printf("%d\n",a);//ǰ�涼����ո񣬿������һλ������ո� 
		s/=10;
	}while(s>0);  */
	
	
/*	
�ڶ����㷨��
    int a=0;
	do{
		n/=10;
		a++;
		mask=mask*10;
	} while(n>0);
	printf("a=%d\n",a);
  ����λ�����maskֵ����ʵ�����и������㷨�����Ϸ��ĳ���ֱ�ӽ�λ��ͳ�ƺ�maskһ�������� 
	mask=1;
	while(a>1){
		mask=mask*10;
		a--; 
	}
	printf("mask=%d",mask);
	mask/=10; �ᷢ��mask��λ����n��λ����һ������ô����10�Ϳ�����*/
	// ���߻���һ�ַ��� 
	while(n>9){
		n/=10;
		mask*=10;
	} //����������λ������a�ͻ���1���������ﲻ��λ��ͳ�� 
	do{ 
		s=t/mask;
		printf("%d",s);
		if(mask>9){
			printf(" ");
		}
		
		t%=mask;
		mask/=10;
	}while(mask>0);
	printf("\n");
    return 0; 
} 
