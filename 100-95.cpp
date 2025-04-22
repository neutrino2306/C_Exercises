#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int r[34]={0};
	srand((unsigned)time(NULL));
	for(int i=0,t=0;i<6;i++){
		t=rand()%33+1;
		while(r[t]){
			t=rand()%33+1;
		}
		r[t]++;
	}
	for(int i=0;i<34;i++){
		if(r[i]) printf("%d ",i);
	}
	printf("\n%d",rand()%16+1);
	return 0;
}
