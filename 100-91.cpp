#include <stdio.h>
#include <string.h>
int p(char *a){
	for(int i=0;i<strlen(a)/2;i++){
		if(a[i]!=a[strlen(a)-i-1]) return 0;
	}
	return 1;
}

void r(char *a,char *b){
	for(int i=strlen(a)-1,c=0;i>=0;i--){
		b[c++]=a[i];
	}
	b[strlen(a)]='\0';
}

void sum(char *a,char *b,char *s){
	char t[1000],k=0,c=0;
	for(int i=0;i<strlen(a);i++){
		t[c++]=((a[i]-'0')+(b[i]-'0'))%10+k+'0';
		k=((a[i]-'0')+(b[i]-'0'))/10;
	}
	if(k) t[c++]='0'+k;
	t[c]='\0';
	r(t,s);
}

int main(){
	char s[1000],a[1000],b[1000],count=0;
	gets(a);
	for(;count<10&&!p(a);count++){
		r(a,b);
		sum(a,b,s);
		printf("%s + %s = %s\n",a,b,s);
		strcpy(a,s);
	}
		if(count==10){
		printf("Not found in 10 iterations.\n");
	}
	else{
	    printf("%s is a palindromic number.\n",s);
	}
//	printf("%s 是回文数\n",a);
	return 0;
}
