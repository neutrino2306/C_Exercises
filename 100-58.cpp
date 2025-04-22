#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int n=0,x,y,t=rand()%2;
	if(t){
	    printf("Please count.\n");
		scanf("%d",&x);
		while(x>2||x<1||n+x>30){  
		   printf("Error input, again!\n");
		   scanf("%d",&x);
		}
		n+=x;
		printf("You count: %d\n",n);
	}	 
	while(n<30){
	    if((n+1)%3==0){
	       n++;
		}
		else if((n+2)%3==0){
			n+=2;
		}
		else{
			n+=1+rand()%2;
		}
		printf("Computer count: %d\n",n);
		if(n==30){
			printf("I win! You lose!\n");
			break;
		}
		printf("Please count.\n");
		scanf("%d",&x);
		while(x>2||x<1||n+x>30){  
		   printf("Error input, again!\n");
		   scanf("%d",&x);
		}
		n+=x;
		printf("You count: %d\n",n);
		if(n==30){
			printf("You win! I lose!\n");
		}
	}
	return 0;
}
