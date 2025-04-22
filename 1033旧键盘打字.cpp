#include <stdio.h>

int main(){
	char h[70],j[100010];
	gets(h);
	gets(j);
	int k;
	for(int i=0;j[i]!='\0';i++){
		for(k=0;h[k]!='\0';k++){
			if(j[i]==h[k]){
				break;
			}
			if(h[k]>64&&h[k]<92&&(h[k]+32)==j[i]){
				break;
			}
			if(h[k]=='+'&&j[i]>64&&j[i]<92){
				break;
			}
		}
	    if(h[k]=='\0')	printf("%c",j[i]);
	}
	return 0;
}
