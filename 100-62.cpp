#include <stdio.h>

int main(){
	int x,y,n=21;
	while(1){
		printf("Please take :\n");
		scanf("%d",&x);
		while(x<1||x>4||x>n){
		   printf("Error input, again!\n");
		   scanf("%d",&x);
		}
		n-=x;
		printf("You took %d\n",x);
		printf("There %d left.\n",n);
		if(!n){
			printf("You lose!\n");
			break;
		}
		
		if(n>=5){
		  y=5-x;
		  n-=y;	
		}
		else{
			y=n-1-x;
			n-=y;
		}
		printf("I took %d\n",y);
		printf("There %d left.\n",n);
		if(!n){
			printf("You win!\n");
			break;
		}
	}
	return 0;
}
