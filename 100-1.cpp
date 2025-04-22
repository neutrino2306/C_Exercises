#include <stdio.h>

int main(){
	int gn,mn;
	for(int gn=0;gn<=20;gn++){
		for(int mn=0;mn<=33;mn++){
				if(5*gn+3*mn+(100-gn-mn)/3.0==100){
					printf("cock=%d hen=%d chicken=%d\n",gn,mn,100-gn-mn);
			}
		}
	}
	return 0;
}

