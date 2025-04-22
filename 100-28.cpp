#include <stdio.h>
#include <math.h>

int main(){
	for(int i=0;i<1000;i++){
		int s=0,k=i;
		while(k){
			int t=k%10;
			s+=pow(t,3);
			k/=10;
		}
		if(s==i) printf("%d\t",i);
	}
	return 0;
}
