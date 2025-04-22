#include <stdio.h>
#include <string.h>

int main(){
	char s[1000];
	int flag=1,n[1000],z=0,j=0,i;
	scanf("%s",s);
	if(s[0]=='-');
	printf("-");
	for(i=1;s[i]!='E';i++){
		if(s[i]!='.'){
			n[j++]=s[i]-48;
		}
		else continue;
	}
	if(s[i+1]=='-'){
		flag=-1;
	}
	for(int k=i+2;k<strlen(s);k++){
		z=s[k]-48+z*10;
	}
	
	if(z==0){
		for(int k=1;k<i;k++){
			printf("%c",s[k]);
		}
	}
	else if(flag<0){
		printf("0.");
		for(;z>1;z--){
			printf("0");
		} 
		for(int k=0;k<j;k++){
			printf("%d",n[k]);
		}
	}
	else{                                               
		if(z<j-1){
		 for(int k=0;k<j;k++){
		 	printf("%d",n[k]);
		 	if(k==z){
		 		printf(".");
			 }
		 }
		}
		else if(z>=j-1){
			for(int k=0;k<j;k++){
				printf("%d",n[k]);
			}
			for(;z-j>=0;z--){
				printf("0");
			}
		}
	}
	
	
	return 0;
}



