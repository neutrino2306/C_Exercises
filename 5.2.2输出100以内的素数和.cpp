# include <stdio.h>
int main(){
	int i,c=0,b;
	int a=0;
	for(i=2;i<=100;i++,c=0) {
	 for(b=1;b<=i;b++){
		if(i%b==0){
			c++;
		}
		}
		if(c==2){
    	a=a+i;
      	}
	}
    printf("100以内的素数是：%d\n",a);
		return 0;
 } 
