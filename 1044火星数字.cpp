#include <stdio.h>
#include <string.h>

int main(){
    char s[10];
    char n1[13][5]={"tret","jan", "feb", "mar", "apr", "may","jun", "jly", "aug", "sep", "oct", "nov", "dec"};
    char n2[12][4]={"tam", "hel", "maa", "huh","tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
    int n,numd=0,numh=0,flag=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    	gets(s);
    	if(s[0]>47&&s[0]<58){
    		for(int j=0;s[j]!='\0';j++){
    			numd=numd*10+s[j]-48;
			}
			if(numd<=12){
				printf("%s\n",n1[numd]);
			}
			else{
				if(numd%13==0){
					printf("%s\n",n2[numd/13-1]);
				}
				else{
				    printf("%s %s\n",n2[numd/13-1],n1[numd%13]);
				}
			}
		}
		else{
			for(int j=0;j<13;j++){
				if(!strcmp(s,n1[j])){
					printf("%d\n",j);
					flag=1;
					break;
				}
			}
			for(int j=0;j<12;j++){
				if(!strcmp(s,n2[j])){
					printf("%d\n",(j+1)*13);
					flag=1;
					break;
				}
			}
			if(!flag){
				for(int j=0;j<12;j++){
					if(!strncmp(s,n2[j],3)){
						numh+=(j+1)*13;
					}
				}
				for(int j=0;j<13;j++){
					if(!strncmp(s+4,n1[j],3)){
						numh+=j;
					}
				}
				printf("%d\n",numh);
			}
		}
	}
	return 0;
}
