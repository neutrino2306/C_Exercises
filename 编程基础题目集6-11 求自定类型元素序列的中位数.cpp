#include <stdio.h>

#define MAXN 10
typedef float ElementType;

ElementType Median( ElementType A[], int N );

int main ()
{
    ElementType A[MAXN];
    int N, i;

    scanf("%d", &N);
    for ( i=0; i<N; i++ )
        scanf("%f", &A[i]);
    printf("%.2f\n", Median(A, N));

    return 0;
}

ElementType Median( ElementType A[], int N ){
	ElementType median;
	for(int i=0;i<N;i++){
	 for(int j=0;j<N-i;j++){
	 	ElementType t;
	 	if(A[j]>A[j+1]){
	 		t=A[j];
	 		A[j]=A[j+1];
	 		A[j+1]=t;
		 }
	 }	
	}
	if(N%2==0){
		median=A[N/2];
	} 
	else median=A[(N+1)/2];
	return median;
}




