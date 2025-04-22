#include <stdio.h>
#include <stdlib.h>

typedef struct{
	double k,p,dj;
}yb;

int com(const void *a,const void *b);

int main(){
	int n;
	double d;
	scanf("%d %lf",&n,&d);
	yb s[n]; 
	double sum=0;
	for(int i=0;i<n;i++){
		scanf("%lf",&s[i].k);
	}
	for(int i=0;i<n;i++){
		scanf("%lf",&s[i].p);
		s[i].dj=1.0*s[i].p/s[i].k;
	}	
	qsort(s,n,sizeof(s[0]),com);
	for(int j=0;d>0;j++){
		if(d>s[j].k){
			sum+=s[j].p;
			d-=s[j].k;
		}
		else{
			sum+=(s[j].dj)*d;
			break;
		}
	}
	printf("%.2f\n",sum);
	return 0;
}

int com(const void *a,const void *b){
	int ret; 
	yb*pa=(yb*)a;
	yb*pb=(yb*)b;
	if(pa->dj>pb->dj) ret=-1;
    else ret=1;
    return ret;
}





