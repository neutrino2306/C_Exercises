# include <stdio.h>
int main(){
	int count1=0,count2=0;
	char c;
	do{
		scanf("%c",&c);
		if(c!=' '&&c!='\n'&&c!='.'){ //����Ҫע�⣬���ж������ﻹ��д�� c!='.' ����Ϊ����������.������while�ں��棬����count1���ǻ��1                   
			count1++;                 //��Ӱ���������   ����վ��ӣ�ֻ��һ����ţ�������Ϊ��һ������   ����βҲ�������� 
		}
		else if(c==' '||c=='\n'){
			if(count1!=0&&count2==0){
				printf("%d",count1);   //���ֻ��һ������  ����������� 
				count2++;
			}
			else if(count1!=0&&count2!=0){
				printf(" %d",count1);   //�������������1 ����ô��� 
			}
			count1=0;                   //���������µ���ʱ  ��ȻҪ��count1���� 
		}
	}while(c!='.');
			if(count1!=0&&count2<1) printf("%d",count1);       //�����ֻ��һ�����ʵ�һ�仰 
		else if(count1!=0&&count2>=1) printf(" %d",count1);   //����Ƕ�����ʵľ��ӽ�β 
	return 0;
}
