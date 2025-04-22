
# include <stdio.h>
double p(int a);
double q(int b);
int main(){
	double n,sum=1.0;
	int t;
	scanf("%lf",&n);
	for(int i=1;;i++){
	  if((p(i)/q(i))<n){
	  	sum=sum+p(i)/q(i);
		  break;
	  }
	 else	sum=sum+p(i)/q(i);
	 
	}
	printf("%.6f",sum*2);
	return 0;
}

double p(int a){
	double c=1.0;
	for(int j=1;j<=a;j++){
		c*=j;
	}
	return c;
}

double q(int b){
	double d=1.0;
	for(int k=3;k<=(2*b+1);k+=2){
		d*=k;
	}
 	return d;
}
  






