#include <stdio.h>

int main(){
	printf("����\tŮ��\tС��\n");
	for(int i=0;i<=10;i++){
		for(int j=0;j<=20;j++){
			if(30-i-j+3*i+2*j==50)
			printf("%d\t%d\t%d\n",i,j,30-i-j);
		}
	}
	return 0;
} 
