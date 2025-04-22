#include <stdio.h>
#include <string.h>

int main(){
	char a[1000001],b[1000001],c[126],t=0;
	gets(a);
	gets(b);
	for(int i=0;i<strlen(a);i++){
		if(!i||strchr(c,a[i])==NULL) c[t++]=a[i];
	}
	for(int i=0;i<strlen(b);i++){
		if(strchr(c,b[i])==NULL) c[t++]=b[i];
	}
	printf("%s",c);
	return 0;
}
