#include <stdio.h>
#include <stdlib.h>

int com(const void*a,const void *b);

int main(){
	int n,a[4],i,max=0,min=0;
	scanf("%d",&n);
	do{
   	  for(i=0;i<4;i++){
		a[i]=n%10;
		n/=10;
      } 
	  qsort(a,i,sizeof(a[0]),com);
	  max=a[3]*1000+a[2]*100+a[1]*10+a[0];
	  min=a[0]*1000+a[1]*100+a[2]*10+a[3];
	  n=max-min;  
      if(a[1]==a[2]&&a[1]==a[0]&&a[0]==a[3]){
	  	printf("%d - %d = 0000",max,min);
	  	break;
	  }
	  else{
         
	  	printf("%04d - %04d = %04d\n",max,min,n);
	  }

    }while(n!=6174);
	return 0;
}

int com(const void*a,const void *b){
	int t=*(int *)a-*(int *)b;
	return t;
}
	
	
	



