#include <stdio.h>

int main(){
	int c=0;
	printf("һԪ\t���\tһ��\n");
	for(int i=0;i<=5;i++){
		for(int j=0;j<=10;j++){
		   for(int k=0;k<=50;k++){
		   	if(10*i+5*j+k==50){
		   	printf("%d\t%d\t%d\n",i,j,k);
			   c++;	
			}
		   }
		}
	}
	printf("%d",c);
	return 0;
}
