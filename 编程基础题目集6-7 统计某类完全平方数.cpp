#include <stdio.h>
#include <math.h>

int IsTheNumber ( const int N );

int main()
{
    int n1, n2, i, cnt;

    scanf("%d %d", &n1, &n2);
    cnt = 0;
    for ( i=n1; i<=n2; i++ ) {
        if ( IsTheNumber(i) )
            cnt++;
    }
    printf("cnt = %d\n", cnt);

    return 0;
}

int IsTheNumber ( const int N ){
	int ret=0,t,j;
	int a[9];
	t=N;
	for(j=0;t>0;j++){
	 a[j]=t%10;
	 t/=10;
	}
	for(int p=1;p<(N/2);p++){
		if(p*p==N){
		for(int k=0;k<j;k++){
         for(int l=k+1;l<j;l++){
     	if(a[k]==a[l]){
     		ret=1;
		 }
	 }
	}
		}
	}
	return ret;
}


