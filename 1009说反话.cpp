#include <stdio.h>
int main(){
	char s[90][90];
	int n=0;
	while(scanf("%s",&s[n])!=EOF){
		n++;
	} 
	for(int i=n-1;i>0;i--) printf("%s ",s[i]);
	printf("%s",s[0]);
	return 0;
}
