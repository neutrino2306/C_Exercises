#include <stdio.h>
#include <string.h>

int main(){
	char *f,s[81],flag=0;
	gets(s);
	f=s;
	while(!flag){
		f++;
		if((*f)!='*') flag=1;
	}
	for(char *a=f;a<&s[strlen(s)-1];a++){
		printf("%c",*a);
	}
	return 0;
}
