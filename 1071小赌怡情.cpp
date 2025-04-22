#include <stdio.h>

int main(){
	int x,k,n1,n2,b,z;
	scanf("%d%d",&x,&k);
	for(int i=0;i<k;i++){
		scanf("%d%d%d%d",&n1,&b,&z,&n2);
		if(z<=x){
		  if((n1>n2&&b==0)||(n1<n2&&b==1)){
		  	x+=z;
			printf("Win %d!  Total = %d.\n", z, x);
	    	}
		  if((n1<n2&&b==0)||(n1>n2&&b==1)){
		  	x-=z;
			 printf("Lose %d.  Total = %d.\n", z, x);
	    	} 
	    }
	    else {
	    	if(x<=0){
	    	 printf("Game Over.\n");
	    		break;
			}
	    	else   printf("Not enough tokens.  Total = %d.\n", x);
		}
		
	}
	return 0;
} 
