#include <stdio.h>

int main(){
	char s[100001];
	long long sum=0,c=0,c1=0,count=0;
	gets(s);
	for(int i=0;s[i]!='\0';i++){
		if(s[i]>64&&s[i]<91){
			sum+=s[i]-64;
			count++;
		}
		else if(s[i]>96&&s[i]<123){
			sum+=s[i]-96;
			count++;
		}
	}
	while(sum>0){
		int t=sum%2;
		if(t) c1++;
		else c++;
		sum/=2;
	}
	printf("%d %d",c,c1);
	return 0;
}
