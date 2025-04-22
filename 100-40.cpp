#include <stdio.h>

int main(){
    long int a,b,c;
    scanf("%ld/%ld",&a,&b);
    while(1){
    	if(b%a) c=b/a+1;
    	else{
    		c=b/a;
    		a=1;   
		}
    	if(a==1){
    		printf("1/%ld\n",c);
    		break;
		}
		else{
			printf("1/%ld+",c);
			a=a*c-b;
			b*=c;
			if(a==3&&b%2==0){
				printf("1/%ld+1/%ld\n",b/2,b);
				break;
			}
		}
	} 
	return 0;
}
