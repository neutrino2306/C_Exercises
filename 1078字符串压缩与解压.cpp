#include <stdio.h>
#include <string.h>

int main(){
	char f,s[1001];
	scanf("%c",&f);
	getchar();
	gets(s);
	if(f=='C'){
		int count=1;
	    for(int i=0;s[i]!='\0';i++){
	    	if(s[i]==s[i+1]){
	    		count++;
			}
			else if(count>1){
				printf("%d%c",count,s[i]);
				count=1;
			}
			else if(count==1){
				printf("%c",s[i]);
			}
		}
	}
	if(f=='D'){
		int count=0;
		for(int i=0;s[i]!='\0';i++){
			if(s[i]>='0'&&s[i]<='9'){
				count=count*10+s[i]-'0';
			}
			else {
				if(!count){
					count++;
				}
				for(int j=0;j<count;j++){
					printf("%c",s[j]);
				}
				count=0;
			}
	}
	return 0;
}
