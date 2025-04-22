#include <stdio.h>
#include <string.h>
int main(){
	char n[21],n1[21],n2[21];
	int ret=0,r[22],count=0,flag=0;
	scanf("%s%s%s",n,n1,n2);
	int l1=strlen(n1),l2=strlen(n2),l=strlen(n);
	for(int i=0;i<(l1>l2?l1:l2);i++){
        int a=(i>l1-1)?0:(n1[l1-1-i]-'0'),b=(i>l2-1)?0:(n2[l2-1-i]-'0'),s=a+b+ret,t=(n[l-1-i]=='0')?10:(n[l-1-i]-'0');
			r[count++]=s%t;
			ret=s/t;
    }
    if(ret) r[count++]=ret;
	for(int i=count-1;i>=0;i--){
        if(r[i]||flag){
            flag=1;
            printf("%d",r[i]);
        }
		else if(!i&&!flag){
            printf("0");
        }
        else continue;
	}
    printf("\n");
	return 0;
}

