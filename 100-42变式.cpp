#include <stdio.h>
#include <math.h>
int a[20],n=20,bu[21]={1,0};

int p(int n){
	int c=0; 
	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0) c++;
	}
	if(c==1&&n!=1) return 1;
	else return 0;
}

void f(int c){
	if(c==n&&p(a[0]+a[n-1])){
		for(int i=0;i<n;i++){
			printf("%d ",a[i]);
		}
		printf("\n");
		return;
	}
	else{
		for(int i=2;i<=n;i++){
		   	if(!bu[i-1]&&p(i+a[c-1])){
		   		a[c]=i;
		   		bu[i-1]=1;
		   		f(c+1);
		   		bu[i-1]=0;
			   }
		}
	}
}

int main(){
	for(int i=0;i<20;i++){
		a[i]=i+1;
	}
	f(1);
	return 0;
}
