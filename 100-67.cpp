#include <stdio.h>

int main(){
	int a,b,c,d,s[1000]={0};
	scanf("%d%d%d%d",&a,&b,&c,&d);
	for(int i=0;i<=5;i++){
		for(int j=0;i+j<=5;j++){
			for(int k=0;k+i+j<=5;k++){
				for(int l=0;l+k+i+j<=5;l++){
					s[a*i+b*j+c*k+l*d]++;
				//	printf("%d %d %d %d\n",i,j,k,l);
				}
			}
		}
	}
	for(int i=999;i>0;i--){
		if(s[i]){
		printf("%d\n",i); 
		break;	
		}
	}
	return 0;
}
