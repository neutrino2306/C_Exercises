#include <stdio.h>
#include <string.h>

int main(){
	char s[10000][10000],c;
	int counth=0,countr=0;
	while((c=getchar())!='\n'){
		while(c!=' '){
			s[counth][countr++]=c;
			c=getchar();
		}
		s[counth++][countr]='\0';
	}
	for(int i=counth-1;i>=0;i--){
		printf("%s",s[counth]);
	}
	return 0;
}
