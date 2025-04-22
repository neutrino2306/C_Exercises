# include <stdio.h>
int main(){
	int n,foot,inch;
	scanf("%d",&n);
	foot=n/30.48;
	inch=(1.0*n/30.48-foot)*12;
	printf("%d %d",foot,inch);
	
	return 0;
} 
