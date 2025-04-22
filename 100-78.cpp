#include <stdio.h>

int f(int n,int x){
	if((x-1)%5==0){
		if(n==1) return 1;
	    else{
		  return f(n-1,(x-1)/5*4);
    	}
	}
	return 0;
}

int main(){
	int n,t;
	scanf("%d",&n);
	for(int i=6;;i+=5){
		if(f(n,i)){
			t=i;
			break;
		}
	} 
	printf("%d",t);
	return 0;
}
