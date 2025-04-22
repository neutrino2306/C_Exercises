#include <stdio.h>
#include <string.h>

int main(){
	char s[81];
	int n;
	scanf("%d",&n);
	getchar();
	for(int i=0;i<n;i++){
		gets(s);
		int c1=0,c2=0,flag=1;
		if(strlen(s)<6){
			printf("Your password is tai duan le.\n");
		}
		else{
			for(int i=0;i<strlen(s);i++){
				if(s[i]>='0'&&s[i]<='9'){
						c2++;
					}
                else if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
						c1++;
					}
                else if(s[i]!='.'){
					printf("Your password is tai luan le.\n");
					flag=0;
					break;
				}
			}
			if(flag){
				if(!c1&&c2){
					printf("Your password needs zi mu.\n");
				}
				else if(!c2&&c1){
					printf("Your password needs shu zi.\n");
				}
				else if(c1&&c2){
					printf("Your password is wan mei.\n");
				}
			}	
		}
	}
	return 0;
}
