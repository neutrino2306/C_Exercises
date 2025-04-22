#include <stdio.h>
#include <math.h>

int main(){
    for(double y=1;y>=-1;y-=0.1){
    	int m=acos(y)*10;
    	for(int x=1;x<m;x++){
    		printf(" ");
		}
		printf("*");
		for(int x=m;x<62-m;x++){
			printf(" ");
		}
		printf("*\n");
	
	}
	
	return 0;
} 
