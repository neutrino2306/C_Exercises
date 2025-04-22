#include <stdio.h>
#include <string.h>


int main(){
	char n[103];
	int count=0; 
	char string[10][5]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	gets(n);
	for(int i=0;n[i]!='\0';i++){
		count+=(int)(n[i]-48);
	}
	if(count>99){
		printf("%s ",string[count/100]);
		count=count%100;
		printf("%s ",string[count/10]);
		count=count%10;
		printf("%s",string[count]);
	}
	else if(count>9){
		printf("%s ",string[count/10]);
		printf("%s",string[count%10]);
	}
	else printf("%s",string[count]);
	return 0;
}
