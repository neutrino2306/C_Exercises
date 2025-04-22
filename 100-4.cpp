#include <stdio.h>

int main(){
	int i,j;
	for(i=1;i<10;i++){
		for(j=0;j<10;j++){
			for(int k=32;k<=99;k++){
				if(k*k==(1100*i+11*j)){
					goto out;
				}
			}
		}
	}
	out:
	printf("%d",1100*i+11*j);
	return 0;
}
