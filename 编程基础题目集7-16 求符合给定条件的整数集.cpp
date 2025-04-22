# include <stdio.h>
int main(){
	int n,count=1;
	scanf("%d",&n);
	for(int i=n;i<n+4;i++){
		for(int j=n;j<n+4;j++){
			for(int k=n;k<n+4;k++){
				if(i!=j&&j!=k&&i!=k){
					if(count%6!=0){
						printf("%d%d%d ",i,j,k);
					}
					else{
						printf("%d%d%d\n",i,j,k);
					}
					count++;
				}
			}
		}
	}
	
	return 0;
}
