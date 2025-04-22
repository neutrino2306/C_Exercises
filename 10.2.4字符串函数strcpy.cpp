# include <stdio.h>
# include <string.h>

char* mystrcpy(char* dst,const char*src){
	while(*src!='\0'){
		*dst=*src;
		src++;
		dst++;
	}
    return dst;
}
 
int main(){
	char s1[]="abc";
	char s2[]="abc ";
	printf("%s",mystrcpy(dst))
	return 0;
}
