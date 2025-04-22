#include <stdio.h>

int main(){
	int x,j,i;
	for(i=23;i>0;i+=2){
	 for(j=1,x=i;j<5&&x>=11;j++){
	 if((x+1)%(j+1)==0){
	 	x=x-(x+1)/(j+1);		
	 }
	 else break;
     }
     if(j==5&&x==11){
		printf("%d\n",i);
		break;
	}
     
	}
	
	return 0;
}
