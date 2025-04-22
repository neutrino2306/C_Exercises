#include <stdio.h>

int main(){
	for(int i=9 ;;i++){
	   int flag=1;
	   for(int j=2;j<11;j++){
	   	 if(i%j!=(j-1)){
	   	 	flag=0;
	   	 	break;
		 }
	   }
	   if(flag){
	   	printf("%d",i);
	   	break;
	   } 
	}
	return 0;
}
