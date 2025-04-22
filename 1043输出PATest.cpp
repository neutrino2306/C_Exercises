#include <stdio.h>
#include <string.h>

int main(){
	char s[10001];
	int c[127]={0};
	gets(s);
	for(int i=0;i<strlen(s);i++){
		c[s[i]]++;
	}
	while(c[80]||c[65]||c[84]||c[101]||c[115]||c[116]){
		if(c[80]){
			printf("P");
			c[80]--;
		} 
		if(c[65]){
			printf("A");
			c[65]--;
		} 
		if(c[84]){
			printf("T");
			c[84]--;
		} 
		if(c[101]){
			printf("e");
			c[101]--;
		} 
		if(c[115]){
			printf("s");
			c[115]--;
		} 
		if(c[116]){
			printf("t");
			c[116]--;
		} 
	}
	return 0;
}
