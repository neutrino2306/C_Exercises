#include <stdio.h>
#include <string.h>

int main(){
	char n[1001];
	int s[10]={0};
	gets(n);
	for(int i=0;i<strlen(n);i++){
		s[n[i]-48]++;
	}
    for(int j=0;j<10;j++){
    	if(s[j]){
    		printf("%d:%d\n",j,s[j]);
		}
		else continue;
	}
		
	return 0;
}




