#include <stdio.h>
#include <string.h>
#include <math.h>

int ctoi(char c);
char itoc(int t);
void  f(char s[1000],char a[1000],int n,int m);

int main(){
	
	int flag=1,n,m;
	char s[1000],a[1000];
	while(flag){
		printf("ת��ǰ�����ǣ�");
		scanf("%s",s);
		printf("ת��ǰ�������ǣ�");
		scanf("%d",&n);
		printf("ת����������ǣ�");
		scanf("%d",&m);
		f(s,a,n,m);
		printf("ת��������ǣ�"); 
		for(int i=strlen(a)-1;i>=0;i--){
			printf("%c",a[i]);
		}
		printf("\n�Ƿ����������������1������������0:\n"); 
		scanf("%d",&flag); 
	}
	return 0;
}

int ctoi(char c){
	return (c>='0'&&c<='9')?(c-'0'):(c-'A'+10);
}

char itoc(int t){
	return (char)(t>9)?(t-10+'A'):(t+'0');
}

void  f(char s[1000],char a[1000],int n,int m){
  	int count=0,c=0;
  	long long sum=0;
  	 for(int i=0;i<strlen(s);i++){
  	 	 sum+=ctoi(s[i])*pow((double)n,(double)(strlen(s)-i-1));
	 }
	 for(;sum>0&&c>0;count++,sum/=m){
	 	int k=sum%m+c;
	 	a[count]=itoc(k%m);
	 	c=k/m;
	 }
//	 if(c) a[count++]=itoc(c);
	 a[count]='\0';
}



