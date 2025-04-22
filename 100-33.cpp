#include <stdio.h>

int max(int a,int b,int c){
	int t;
	if(a<b){
		t=b;
		b=a;
		a=t;
	}
	if(a<c){
		t=c;
		c=a;
		a=t;
	}
	if(b<c){
		t=c;
		c=b;
		b=t;
	}
	return (a*100+b*10+c);
}

int min(int a,int b,int c){
	int t;
	if(a<b){
	  t=b;
	  b=a;
	  a=t;
	}
	if(a<c){
	  t=a;
	  a=c;
	  c=t;
	}
	if(b<c){
	  t=c;
	  c=b;
	  b=t;
	}
	return (c*100+b*10+a);
}

int main(){
	int n;
	scanf("%d",&n);
	for(int i=0,h;;i++){
		int a=n/100,b=(n%100)/10,c=n%10,j=max(a,b,c)-min(a,b,c);
			if(h==j&&i){
			  printf("%d",j);
			  break;	
			}
			else{
			   h=j;
			   n=j;	
			}	
	}
	
	return 0;
}
