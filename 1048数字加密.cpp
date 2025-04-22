#include <stdio.h>
#include <string.h>

int main(){
	char a[101],b[101],ch[13]={'0','1','2','3','4','5','6','7','8','9','J','Q','K'};
	scanf("%s %s",a,b);
	int c[101],t=0;
	for(int p=strlen(a)-1,q=strlen(b)-1,count=1;(p>=0)||(q>=0);p--,q--,count++){
	int	ap=(p>=0)?(a[p]-'0'):0;
	int	bq=(q>=0)?(b[q]-'0'):0;
		if((t+1)%2){
			c[t++]=(ap+bq)%13;
		}
		else {
			c[t++]=(bq-ap+10)%10;
		}
	}
	for(int i=t-1;i>=0;i--){
		printf("%c",ch[c[i]]);
	}
	return 0;
}

