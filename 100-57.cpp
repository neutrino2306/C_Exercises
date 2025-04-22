#include <stdio.h>

int main(){
	int n,k,x,y,cc=0,pc=0,g=0;
	for(;;){
		printf("No.%d game begin\n",++g);
		printf("How many mountains are there?\n");
		scanf("%d",&n);
		if(!n) break;
		else{
		    printf("How many mountains are allowed to each time?\n");
	    	scanf("%d",&k);
			while(k>n||k<1){
		        printf("Repeat again!\n");
		        scanf("%d",&k);
			}
			do{
				printf("How many mountains do you wish to move away?\n");
				scanf("%d",&x);
				while(x>k||x<1){
		           printf("Please try again!\n");
		           scanf("%d",&x);
			    }
			    n-=x;
			    printf("\nThere are %d mountains left now.\n",n); 
			    if(!n){
			    	printf("\n¡­¡­¡­¡­¡­¡­I win. You lose.   hahahaha¡­¡­¡­¡­¡­¡­\n\n");
			    	cc++;
				}
				else{
					y=((n-1)%(k+1))?(n-1)%(k+1):1;
				    printf("Computer moves %d mountains.\n",y);
					n-=y;
					if(n) printf("\nThere are %d mountains left now.\n",n); 
			        else{
			    	printf("\n¡­¡­¡­¡­¡­¡­You win. I lose.   Congrats¡­¡­¡­¡­¡­¡­\n\n");
			    	pc++;
			    	}
				}
			    
			}while(n);
		}
		printf("Game in total have been played %d.\n",g);
		printf("You have won %d games.\n",pc);
		printf("I have won %d games.\n",cc);
	} 
	return 0;
}	
