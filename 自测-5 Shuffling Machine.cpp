#include <stdio.h>

int main(){
	int n,a[55],c[55],d[55],s[13]={13,1,2,3,4,5,6,7,8,9,10,11,12};
	char b[5]={'S','H','C','D','J'};
	scanf("%d",&n);
	for(int i=1;i<=54;i++){
	  scanf("%d",&c[i]);
	  a[i]=i;
	}
	for(int i=0;i<n;i++){
		for(int j=1;j<=54;j++){
			d[j]=a[j];
		}
		for(int j=1;j<=54;j++){
			a[c[j]]=d[j];
		}
	}
	for(int i=1;i<=54;i++){
		if(a[i]%13){
		printf("%c",b[a[i]/13]);	
		}
		else{
		printf("%c",b[a[i]/13-1]);
		}
		printf("%d",s[a[i]%13]);
		if(i<54) printf(" ");
	}
	return 0;
}
