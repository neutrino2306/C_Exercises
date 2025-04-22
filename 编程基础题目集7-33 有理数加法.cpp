# include <stdio.h>
int main(){
	int a,b,c,d;
	scanf("%d/%d %d/%d",&a,&b,&c,&d);
	if(b==d){
	  if((a+c)%b==0){
	  	printf("%d",(a+c)/b);
	  }
	  else{
	  	int p=a+c;
	  	int q=b;
	  	while(q!=0){
		int n=p%q;
		p=q;
		q=n;
     	} 
	   printf("%d/%d",(a+c)/p,b/p);
	 } 
	}
	else{
		int m=a*d+c*b;
		int n=b*d;
	   if(m%n==0){
	  	printf("%d",m/n);
	   }
	   else {
	   	int j=m;
	  	int k=n;
	  	while(k!=0){
		int h=j%k;
		j=k;
		k=h;
     	} 
	   printf("%d/%d",m/j,n/j);
	 } 
	}
	return 0;
}
