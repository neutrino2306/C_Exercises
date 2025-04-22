#include <stdio.h>

int main(){
	int n=25,x,y,a=0,b=0;
	while(n){
		printf("It is your turn.\n");
		scanf("%d",&x);
		while(x>3||x<1||n-x<0){  
		   printf("Error input, again!\n");
		   scanf("%d",&x);
		}
		n-=x;
		a+=x;
		printf("You took %d\n",x);
		printf("There %d left.\n",n);
		if(!n){
			printf(a%2==1?"Computer":"You");
			printf(" win the game !\n");
			printf("Computer took total: %d\n",b);
			printf("You took total: %d\n",a);
			break;
		}
		if(n==2||n==3||n==4){
			y=n-1;
			n-=y;
		}
		else if((n-1)%3==0){
			n-=1;
			y=1;
		}
		else if((n-2)%3==0){
			n-=2;
			y=2;
		}
		else if((n-3)%3==0){
			n-=3;
			y=3;
		}
		b+=y;
		printf("Computer took %d\n",y);
		printf("There %d left.\n",n);
		if(!n){
			printf(a%2==1?"Computer":"You");
			printf(" win the game !\n");
			printf("Computer took total: %d\n",b);
			printf("You took total: %d\n",a);
			break;
		}
	} 
	return 0;
}
