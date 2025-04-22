#include <stdio.h>

#define MAXN 10
typedef float ElementType;

ElementType Average( ElementType S[], int N );

int main ()
{
    ElementType S[MAXN];
    int N, i;

    scanf("%d", &N);
    for ( i=0; i<N; i++ )
        scanf("%f", &S[i]);
    printf("%.2f\n", Average(S, N));

    return 0;
}

ElementType Average( ElementType S[], int N ){
	double t,sum=0;
	for(int i=0;i<N;i++){
		sum+=S[i];
	}
	t=sum/N;
	return t;
}
