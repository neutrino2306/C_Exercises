# include <stdio.h>
int main(){
	int N,K;
	scanf("%d %d",&N,&K);
	int a[N];
	for(int i=0;i<N;i++){
		scanf("%d",&a[i]);
	}
	for(int j=0;j<K;j++){
		for(int k=0;k<N-j-1;k++){
		  if(a[k]>a[k+1]){
		  	int t=a[k];
		  	a[k]=a[k+1];
		  	a[k+1]=t;
		  }
		}
		}
		for(int p=0;p<N-1;p++){
		printf("%d ",a[p]);
	   }
    	 printf("%d",a[N-1]);
	return 0;
}
