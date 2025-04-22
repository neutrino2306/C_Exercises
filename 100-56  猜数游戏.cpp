#include <stdio.h>
#include <time.h> 
#include <stdlib.h> 

void f(int n,int *c){
	for(int *p=c;p<c+4;p++,n/=10){
		*p=n%10;
	}
}

int main(){
	long t=time(NULL);
	int s=(unsigned int)t/2,m,z[4],c[4],n;
	srand(s);
	if((rand()%10000)>=1000&&(rand()%10000<=9999)){
	    n=rand()%10000;	
	   f(n,z);
	}
//    n=7890;   用作调试 
//    f(n,z);
	while(1){
	  printf("请输入猜的数：");
	  scanf("%d",&m);
	  if(m==n){
	  	printf("4A4B");
	  	break;
	  }
	  f(m,c);
	  int a=0,b=0,k=n,zs[10]={0};
	  for(int i=0;i<4;i++,k/=10){
	  	zs[k%10]++;
	  }
	  for(int i=0;i<4;i++){
	  	if(zs[c[i]]>0){
		  	zs[c[i]]--;
		  	a++;
		  	if(c[i]==z[i]) b++;
		  }
		 else if(c[i]==z[i]) b++;
		 
      }
      printf("%dA%dB\n",a,b);
	}
	return 0;
}
