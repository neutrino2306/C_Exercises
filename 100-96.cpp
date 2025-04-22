#include <stdio.h>

int main(){
	int a[6]={1,0,0,0,0,6},count=0;
	for(int i=2;i<6;i++){
		for(int j=i+1;j<6;j++){
			for(int k=2;k<6;k++){
				for(int l=(i>k)?i+1:k+1;l<6;l++){
					if(i!=j&&i!=k&&i!=l&&j!=k&&j!=l&&k!=l){
						a[1]=i;
						a[2]=j;
						a[3]=k;
						a[4]=l; 
						printf("\n½á¹û%d\n",++count);
						for(int t=0;t<6;t++){
	                     	printf("%d",a[t]);
	                     	if((t+1)%3) printf("  ");
                     		else printf("\n");
                     	}
					}
				}
			}
		}
	}
	
	return 0;
}
