#include <stdio.h>
#include <stdlib.h>

int main(){
	int s=0,t=0;
	randomize();
	for(int i=0;i<100;i++){
		int a=0,b=0;
		for(int j=0;j<6;j++){
			a=a+random(6)+1;
			b=b+random(6)+1;
		}
		if(a>b) s++;
		else if(b>a) t++;
	}
	printf(s>t?"��Ӯ��":(s==t?"ƽ��":"��Ӯ��")); 
	return 0;
}
