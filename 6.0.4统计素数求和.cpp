# include <stdio.h>
int main(){
	int a,b,sum=0,count2=0;
	printf("��������λ��������1<=a<=b<=500����\n");
	scanf("%d %d",&a,&b);
	for(int i=a;i<=b;i++){
		int count1=1;
	 for(int j=2;j<i/2;j++){
		 if(i%j==0){
		 	count1=0;
		 	break;
		 }
	  }	
	  if(count1){   //����count1���� count1==1
	  	printf("%d ",i);
	  	count2++;
	  	sum+=i;
	  }
/*	    �������Լ�д�ļ��������ĳ��� ����������ʦ�ļ�� ��������ʦ�ķ���Ҳ�б׶ˣ�����1����������������ǻ�Ҫ�ٲ��� 
    	for(int j=1;j<=i;j++){
		if(i%j==0){
	  		count1++;
		  }
	  }
		if(count1==2){
			printf("%d ",i);
			sum=sum+i;
			count2++;
		}  */
		
	}
	printf("\n%d %d",count2,sum);   
/*  ������while���д�İ汾 
	int i=a;
	while(i<=b){
		int count1=0;
		int j=1;
		while(j<=i){
			if(i%j==0){
	  		count1++;
		  }
		j++;	
		}
		if(count1==2){
			printf("%d ",i);
			sum=sum+i;
			count2++;
		}
	  i++;
	}
    printf("\n%d %d",count2,sum);  */ 
    
	return 0;
}
