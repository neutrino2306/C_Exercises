#include <stdio.h>

typedef struct{
	int x;
	int z;
}d;
int main(){
	d duo[1001];
	int n=0;
	while(scanf("%d %d",&duo[n].x,&duo[n].z)!=EOF){
		n++;
	}
	if(duo[0].z==0) printf("0 0");
	else if(n>=2){
	  if(duo[n-1].z==0){
         for(int i=0;i<n-2;i++){
		   printf("%d %d ",duo[i].x*duo[i].z,duo[i].z-1);
	      }
	     printf("%d %d",duo[n-2].x*duo[n-2].z,duo[n-2].z-1);
	  } 
	   else{
	   	for(int i=0;i<n-1;i++){
		   printf("%d %d ",duo[i].x*duo[i].z,duo[i].z-1);
	      }
	     printf("%d %d",duo[n-1].x*duo[n-1].z,duo[n-1].z-1);
	   } 
    }
    else if(n==1)  printf("%d %d",duo[n-1].x*duo[n-1].z,duo[n-1].z-1);
	return 0;
}
