#include <stdio.h>
#include <string.h>

int main(){
	char s[101];
	int n;
	gets(s);
	scanf("%d",&n);
	n=n%strlen(s);
	for(int i=n;i<strlen(s);i++){
		printf("%c",s[i]);
	}
	for(int i=0;i<n;i++){
		printf("%c",s[i]);
	}
	return 0;
}
