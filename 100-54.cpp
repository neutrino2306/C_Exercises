#include <stdio.h>

int main(){
	for(int a=0;a<3;a++){
		for(int b=0;b<3;b++){
			for(int c=0;c<3;c++){
				if((a==0&&b!=1&&b!=2)||(a==2&&b!=1)||(a==1&&b==1)){
					if(a!=b&&b!=c&a!=c) printf("a %s\nb %s\nc %s\n",a==2?"两面族":(a?"诚实族":"说谎族"),b==2?"两面族":(b?"诚实族":"说谎族"),c==2?"两面族":(c?"诚实族":"说谎族"));
				}
			}
		}
	}
	return 0;
}
