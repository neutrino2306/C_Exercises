#include <stdio.h>
#include <string.h>

int main(){
	char s[80];
	gets(s);
	for(int i=0;i<strlen(s);i++){
		if(s[i]>='0'&&s[i]<='9') printf("$");
		printf("%c",s[i]);
	}
	return 0;
}
