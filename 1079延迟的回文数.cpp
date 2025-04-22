#include <stdio.h>
#include <string.h>

int h(char *s);
void r(char *a,char *b);
void add(char *a,char *b,char *sdh);

int main(){
	char s[1001],d[1001],sdh[1001];
	int count=0;
	gets(s);  
       
	for(;count<10&&!h(s);count++){
		r(s,d);
		add(s,d,sdh);
		printf("%s + %s = %s\n",s,d,sdh);
        strcpy(s,sdh);
        
	}
	if(count==10){
		printf("Not found in 10 iterations.\n");
	}
	else{
	    printf("%s is a palindromic number.\n",s);
	}
	return 0;
} 

int h(char *s){
	int ret=1;
	for(int i=0;i<strlen(s)/2;i++){
			if(s[i]!=s[strlen(s)-1-i]){
				ret=0;
				break;
			}
		}
	return ret;
}

void r(char *a,char *b){
	for(int i=strlen(a)-1,c=0;i>=0;i--){
       b[c++]=a[i];
	}
	b[strlen(a)]='\0';
}

void add(char *a,char *b,char *sdh){
	int sum=0,ret=0,i;
	char c[1001];
	for(i=0;i<strlen(a);i++){
		sum=a[i]-'0'+b[i]-'0'+ret;
		c[i]=sum%10+'0';
		ret=sum/10;
	}
	if(ret>0) c[i++]=ret+'0';	
	c[i]='\0';
	r(c,sdh);
} 

