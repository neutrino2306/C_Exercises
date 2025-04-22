# include <stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	if(a<=60){
		printf("Speed: %d - OK",a);
	}
   else printf("Speed: %d - Speeding",a);
	return 0;
}
