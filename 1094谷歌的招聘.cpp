/*  这是我自己写的 
#include <stdio.h>
#include <string.h>
#include <math.h>

int p(int a);

int main(){
	int n,k,flag=0,f;
	scanf("%d%d",&n,&k);
	char s[n];
	getchar();
	gets(s);
	for(int i=0;i+k<=strlen(s);i++){
		f=0;
		for(int j=i;j<i+k;j++){
			f=f*10+s[j]-'0';
		}
		if(p(f)){
			flag=1;
			for(int j=i;j<i+k;j++){
                printf("%c",s[j]);
            }
			break;
		}
	}
	if(!flag) printf("404");
	return 0;
}

int p(int a){
	int ret=1;
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0)ret=0;
	}
    if(a==0||a==1) ret=0;
	return ret;
}
 
*/

//下面来看一个大佬的版本 ,用了俩函数轻松解决数据处理和输出的问题 


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int p(int a);
 int main(){
 	int n,k,flag=0;
 	char s[1001],st[10]={0};
 	scanf("%d%d%s",&n,&k,s);
 	for(int i=0;i+k<=n;i++){
 		strncpy(st,s+i,k);
 		if(p(atoi(st))){
 			printf("%s",st);
 			flag=1;
 			break;
		 }
	 }
	 if(!flag) printf("404");
 	return 0;
 }

int p(int a){
	int ret=1;
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0)ret=0;
	}
    if(a==0||a==1) ret=0;
	return ret;
}
 
