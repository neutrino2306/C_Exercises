#include <stdio.h>
#include <string.h>

void f(char *c){
	char *l=c,*r=c+strlen(c)-1,m;
	while(l<r){
		m=*l;
		*l=*r;
		*r=m;
		l++;
		r--;
	}
}

int main(){
	char s[10000];
	gets(s);
	f(s);
	puts(s);
	return 0;
}
