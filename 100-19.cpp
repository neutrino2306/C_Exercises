#include <stdio.h>
#include <math.h>

int main(){
    double s=0;
	for(int i=0;i<64;i++){
		s+=pow(2,i);
	}	
	printf("һ��Ҫ���ӣ�%.2lf��\n",s);
	return 0;
}
