#include <stdio.h>
#include <stdlib.h>

int com(const void *a,const void *b){
	return *(int *)b-*(int *)a;
}
void pl(int b[],char n[]);

int main(){
    char n[]={'2','3','4','5','6','7','8','9','T','J','Q','K','A'};
	int a[53],b1[13],b2[13],b3[13],b4[13],p=0,q=0,s=0,t=0,k=1,m,flag,i;
	while(k<53){
		m=rand()%52;
		for(flag=1,i=1;i<=k;i++){
			if(m==a[i]) flag=0;
		}
		if(flag){
			a[t++]=m;
			if(t%4==0){
				b1[p++]=m;
			}
			else if(t%4==1){
				b2[q++]=m;
			}
			else if(t%4==2){
				b3[s++]=m;
			}
			else if(t%4==3){
				b4[t++]=m;
			}
		}
	}	 
	qsort(b2,13,sizeof(int),com);
	qsort(b2,13,sizeof(int),com);
	qsort(b2,13,sizeof(int),com);
	qsort(b2,13,sizeof(int),com);
	pl(b1,n);
	pl(b2,n);
	pl(b3,n);
	pl(b4,n);
	
	return 0;
}

void pl(int b[],char n[]){
   	printf("\n\006 ");
   	for(int i=0;i<13;i++){
   		if(b[i]/13==0){
   			printf("%c ",n[b[i]%13]);
		   }
	}
	printf("\n\003 ");
	for(int i=0;i<13;i++){
		if(b[i]/13==1){
			printf("%c ",n[b[i]%13]);
		}
	}
    printf("\n\004 ");
	for(int i=0;i<13;i++){
		if(b[i]/13==2){
			printf("%c ",n[b[i]%13]);
		}
	}
	printf("\n\005 ");
	for(int i=0;i<13;i++){
		if(b[i]/13==3||b[i]/13==4){
			printf("%c ",n[b[i]%13]);
		}
	}
	printf("\n");
	
}


