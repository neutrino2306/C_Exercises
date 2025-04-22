#include <stdio.h>

void Print_Factorial ( const int N );

int main()
{
    int N;

    scanf("%d", &N);
    Print_Factorial(N);
    return 0;
}

void Print_Factorial ( const int N ){
	if(N<0){
		printf("Invalid input");
	}
	else if(N==0){
		printf("1");
	}
	else{
		int s=1,c=0,n[10000]={1,0},r=1;
	   if(N<=12){
	   	for(int i=1;i<=N;i++){
	   		s*=i;
		 }
		 printf("%d",s);
	   }	
	   else{
	   	for(int i=2;i<=N;i++){
	   		for(int j=0;j<=r;j++){
	   			s=n[j]*i+c;
	   			c=s/10;
	   			n[j]=s%10;
			 }
			 while(c){
			 	n[++r]=c%10;
			 	c=c/10;
			 }
		 }
		 for(int i=r;i>=0;i--){
		 	printf("%d",n[i]);
		 }  
	   }
	}
	return ;
}
