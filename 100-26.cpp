#include <stdio.h>
#include <string.h>

int main(){
	for(int i=1;i<=256;i++){
		int t=i*i,c=0,f=1;
		char s[7];
		while(t){
			s[c++]=t%10+'0';
			t/=10;
		}
		s[c]='\0';
		for(int j=0;j<strlen(s);j++){
			if(s[j]!=s[strlen(s)-1-j]){
				f=0;
				break;
			}
		}
		if(f) printf("%d\t%d\n",i,i*i);
	}
	return 0;
}
