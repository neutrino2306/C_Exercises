#include <stdio.h>

void f(void){
	char ch;
	scanf("%c",&ch);
	if(ch!='\n'){
		f();
	} 
	printf("%c",ch);
}

int main(){
	printf("Please input a string\n");
	f();
	return 0;
} 
