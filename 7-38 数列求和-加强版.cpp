#include <stdio.h>

int main(){
	int a,n,s[100001]={0},t,count=0,c,l;
	scanf("%d%d",&a,&n);
	for(int i=0;i<n;i++){
		t=0,c=0,l=0;
		for(int j=i;j>=0;j--){
			t=t*10+a;
		}
		for(l=0;t>0;l++){
			int k=t%10+c+s[l];
			s[l]=k%10;
			c=k/10;
			t/=10;
		}
		if(c){
			s[l]+=c;
			l++;
	    }
	}
	for(int i=l-1;i>=0;i--){
		printf("%d",s[i]);
    }
	return 0;
}
