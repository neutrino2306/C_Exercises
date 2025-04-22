#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
	float x,y;
	int c=0,d=0;
    srand((unsigned)time(NULL));
    while(c++<=30000){
    	x=rand()%100;
    	y=rand()%100;
    	if(x*x+y*y<=10000){
    		d++;
		}
	}
	printf("pi=%f\n",4.0*d/30000);
	return 0;
}

