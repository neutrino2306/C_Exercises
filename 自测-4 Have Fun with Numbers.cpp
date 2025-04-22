#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char s[20],m[21];
	int a[10]={0},b[10]={0},r=0,k=0,c=0,f=1;
	scanf("%s",s);
	for(int i=0;i<strlen(s);i++){
		a[s[i]-'0']++;
	}
	for(int i=strlen(s)-1;i>=0;i--){
		k=((s[i]-'0')*2+r)%10;
		r=((s[i]-'0')*2+r)/10;
		m[c++]='0'+k;
		b[k]++;
	}
	if(r) m[c++]='0'+r;
	for(int i=0;i<10;i++){
		if(a[i]!=b[i]){
			f=0;
		}
	}
	if(f) printf("Yes\n");
	else printf("No\n");
	for(int i=c-1;i>=0;i--){
		printf("%c",m[i]);
	}
	return 0;
}
