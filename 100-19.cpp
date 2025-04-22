#include <stdio.h>
#include <math.h>

int main(){
    double s=0;
	for(int i=0;i<64;i++){
		s+=pow(2,i);
	}	
	printf("一共要麦子：%.2lf粒\n",s);
	return 0;
}
