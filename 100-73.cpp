#include <stdio.h>
#include <string.h>

int main(){
	char s[81];
	printf("please enter a string:\n");
	gets(s);
	char *t=&s[strlen(s)-1],*f=s;
	while(*t=='*') t--;
	while(*f=='*') f++;
	for(char *a=f;a<=t;a++){
		printf("%c",*a);
    }
	return 0;
}
