#include <stdio.h>
#include <string.h> 

char itoc(int t){
	return (char)(t>9)?(t-10+'A'):(t+'0');
}
void f(char a[10],int d);

int main(){
	char s[1000000],b[10];
	printf("请输入句子：");
	gets(s);
	printf("转为二进制码为：\n"); 
	for(int i=0;i<strlen(s);i++){
		f(b,(int)s[i]);
		if(s[i]==' ') continue;
	//	else if((s[i]>'z'||s[i]<'a')&&(s[i]>'Z'&&s[i]<'A')) printf(" ");
		else if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))printf("%s\t",b);
		if(i==strlen(s)-1) printf("\n");
	}
	for(int i=0;i<strlen(s);i++){
		if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))printf("%c\t",s[i]);
		else if(s[i]!=' ') printf("%c\t",s[i]);
	}
	return 0;
}

void  f(char b[10],int n){
  	int count=0,c=0,t=0;
  	char a[10];
  	long long sum=n;
	 for(;sum>0;count++,sum/=2){
	 	int k=sum%2+c;
	 	a[count]=itoc(k%2);
	 	c=k/2;
	 }
	 if(c) a[count++]=itoc(c);
	 a[count]='\0';
	 for(int i=strlen(a)-1;i>=0;i--,t++){
	 	b[t]=a[i];
	 }
}



