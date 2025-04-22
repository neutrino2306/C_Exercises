#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a,const void *b);

int judge(int a[],int b[],int n);
 
int main(){
	int n;
	scanf("%d",&n);
	int n1[n],n2[n];
	for(int i=0;i<n;i++){
		scanf("%d",&n1[i]);
	}
	for(int i=0;i<n;i++){
		scanf("%d",&n2[i]);
	}
	if(judge(n1,n2,n)){
	  for(int i=2;i<=n;i*=2){
	     int lim=n/i*i,f=0;
		 for(int j=0;j<lim;j+=i){
		 	for(int k=j;k<j+i-1;k++){
		 		if(n2[k]>n2[k+1]){
		 			f=1;
				 }
			 }
		 }
		 if(f){
		 	for(int j=0;j<lim;j+=i){
		 		qsort(n2+j,i,sizeof(int),cmp);
			 }
			 if(lim<n){
			 	qsort(n2+lim,n-lim,sizeof(int),cmp);
			 }
			 break;
		 }	
	   }		
	}
	
	printf("%d",n2[0]);
	for(int i=1;i<n;i++){
		printf(" %d",n2[i]);
	}
	return 0;
}

int cmp(const void *a,const void *b){
	return *(int *)a-*(int *)b;
}

int judge(int n1[],int n2[],int n){
	int flag=0,ret=0;
	for(int i=n-1;i>=0;i--){
		if(n1[i]!=n2[i]){
			flag=i;
			break;
		}
	}
	for(int i=0;i<flag;i++){
		if(n2[i]>n2[i+1]){
			printf("Merge Sort\n");
		    ret=1;
		}
	}
	if(!ret){
		printf("Insertion Sort\n");
		for(int i=flag;i<n;i++){
			if(n2[i]>n2[i+1]){
				flag=i;
				break;
			}
		}
		qsort(n2,flag+2,sizeof(int),cmp);
	}
	return ret;
}
