# include <stdio.h>
int main(){
	int i,x,b=1,c=0;
	for(x=2;x<=100;x++){
	
   for(i=1,b=1;i<=(x/2);i++){
		 if(i>1&&x%i==0){
      	continue;
	  }
	  else b++;
	}
	if(b<=(x/2)){ 
	c++;
	} 
	else {
	printf("%d\n",x);
	}
}
	return 0;
 } 
