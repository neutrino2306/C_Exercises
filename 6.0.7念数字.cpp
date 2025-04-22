# include <stdio.h> 
int main(){
	
	int a,b,c,d,m,n,t,mask=1;
	printf("ÇëÊäÈëÕûÊı£º\n");
	scanf("%d",&n);
	if(n==0){
		printf("ling\n");
	}
	else if(n<0){
		int m=-n;
		int c=m;
		for(int i=1;m>0;){
	  	m/=10;
	  	d++; 
	  }
	  for(int i=1;i<d-1;i++){
	  	mask*=10;
	  }
	  printf("fu ");
	  while(mask>0){
	    b=c/mask;
		
	    switch(b){
	      case 0:printf("ling ");break;
	      case 1:printf("yi ");break;
	      case 2:printf("er ");break;
	      case 3:printf("san ");break;
	      case 4:printf("si ");break;
	      case 5:printf("wu ");break;
	      case 6:printf("liu ");break;
	      case 7:printf("qi ");break;
	      case 8:printf("ba ");break;
		  case 9:printf("jiu ");break;
		}
		c=c%mask;
		mask/=10;
	  }
	
	}
	else{
		t=n;
	  for(int i=1;n>0;){
	  	n/=10;
	  	a++; 
	  }
	  for(int i=1;i<a;i++){
	  	mask*=10;
	  }
	  while(mask>0){
	    b=t/mask;
	    switch(b){
	      case 0:printf("ling ");break;
	      case 1:printf("yi ");break;
	      case 2:printf("er ");break;
	      case 3:printf("san ");break;
	      case 4:printf("si ");break;
	      case 5:printf("wu ");break;
	      case 6:printf("liu ");break;
	      case 7:printf("qi ");break;
	      case 8:printf("ba ");break;
		  case 9:printf("jiu ");break;
		}
		t=t%mask;
		mask/=10;
	  }
    }
	return 0;
}
