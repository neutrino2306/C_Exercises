# include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int j=1;j<=n;j++){
		for(int i=1;i<=j;i++){
			if(i==j&&j!=n){
				if(i*j>=10) printf("%d*%d=%d  \n",i,j,i*j);
		        else printf("%d*%d=%d   \n",i,j,i*j);
			}
            else {
		        if(i*j>=10) printf("%d*%d=%d  ",i,j,i*j);
		        else printf("%d*%d=%d   ",i,j,i*j);
            }
		}
    }
	return 0;
} 
