#include <stdio.h>

int main(){
	for(int i=5;i<10;i++){
		for(int j=0;j<10;j++){
			int s=90009+i*1010+j*100-95859;
			if(s/2>0&&s/2<=120){
				printf("%.2lf\t",1.0*s/2);
			}
		}
	}
	return 0;
}
