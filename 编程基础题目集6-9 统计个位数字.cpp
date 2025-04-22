#include <stdio.h>

int Count_Digit ( const int N, const int D );

int main()
{
    int N, D;

    scanf("%d %d", &N, &D);
    printf("%d\n", Count_Digit(N, D));
    return 0;
}

int Count_Digit ( const int N, const int D ){
	int count=0,t;
	if(N<0){
		t=-N;
	}
	else if(N==0){
		count=1; 
		t=0;
	}
	else t=N; 
	while(t>0){
		if((t%10)==D){
			count++;	
		}
     t/=10;
	}
	return count;
}
