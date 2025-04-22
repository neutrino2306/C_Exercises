#include <stdio.h>
#include <string.h>
int main(){
	char s[100][100],l[100];
	int n=-1,m=0;
	while(scanf("%s",&s[++n])!=EOF){
		if(m<strlen(s[n])){
			m=strlen(s[n]);
			strcpy(l,s[n]);
		}
	//	n++;
	} 
	printf("%s  %d",l,m);
	return 0;
}
