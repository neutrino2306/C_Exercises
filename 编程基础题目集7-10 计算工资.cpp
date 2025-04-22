# include <stdio.h>
int main(){
	int a,b;
    double c;
	scanf("%d %d",&a,&b);
	if(a>=5){
		if(b>40){
		c=50*40+50*1.5*(b-40);
	  	printf("%.2f",c);
	  }
	  else{
	  	c=50*b;
	  	printf("%.2f",c);
	  }
		
	}
	else{
	  if(b>40){
	  	c=30*40+30*1.5*(b-40);
	  	printf("%.2f",c);
	  }
	  else{
	  c=30*b;
	  	printf("%.2f",c);
	  }
	}
	return 0;
} 
