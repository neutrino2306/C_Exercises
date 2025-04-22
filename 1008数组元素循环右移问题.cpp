#include <stdio.h>
int main(){
	int m,n;
	scanf("%d %d",&n,&m);
	m%=n;
	int a[n],b[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
	 if(i<n-m) b[i+m]=a[i];
	 else b[i+m-n]=a[i];
	}
	for(int i=0;i<n-1;i++) printf("%d ",b[i]);
	printf("%d",b[n-1]);
	return 0;
}
