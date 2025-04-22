#include <stdio.h>
#include <string.h>

int main(){
	char s[100001];
	gets(s);
	long long ct=0,cp=0,sum=0;
	int t=0;
	for(int i=0;i<strlen(s);i++){
		if(s[i]=='T'){
			ct++;
		}
	}
	for(int i=0;i<strlen(s);i++){
		if(s[i]=='T'){
			ct--;
		}
		if(s[i]=='P'){
			cp++;
		}
		if(s[i]=='A'){
			sum+=(cp*ct)%1000000007;
		}
	}
	printf("%lld",sum%1000000007);
	return 0;
}
