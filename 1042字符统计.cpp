#include <stdio.h>
#include <string.h>

int main(){
	char c[1001];
	int ch[127]={0},t=97;
	gets(c);
	for(int i=0;i<strlen(c);i++){
		if(c[i]>64&&c[i]<91){
			ch[c[i]+32]++;
		}
		else ch[c[i]]++;
	}
	int max=ch[97];
	for(int i=97;i<123;i++){
		if(max<ch[i]){
			max=ch[i];
			t=i;
		}
		else if(max==ch[i]){
			if(t>i){
				t=i;
			}
		}
	}
	printf("%c %d",t,max);
	return 0;
}
