#include <stdio.h>
#include <string.h>

int main(){
	char c[22],s[1000000];
	int n;
	scanf("%s%d",c,&n);
    getchar();
	while(n--){
		gets(s);
		if(s[0]=='#'&&strlen(s)==1){
			break;
		}
		else if(strcmp(c,s)==0){
			printf("Welcome in");
			break;
		}
		else{
			printf("Wrong password: %s\n",s);
			if(n<=0){
				printf("Account locked");
				break;
			}
		}
	}
	return 0;
}
