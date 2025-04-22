#include <stdio.h>

int main(){
	int a[3][3],flag,n;
	for(int i=0;i<=3;i++){
        a[0][0]=i;
		for(int j=i;j<=7-i&&j<=3;j++){
			a[1][0]=j;
			if((a[2][0]=7-i-j)>3) continue;
			if(a[2][0]<a[1][0]) break;
			for(int k=1;k<=5;k+=2){
				a[0][1]=k;
				for(int l=1;l<7-k;l+=2){
					a[1][1]=l;
					a[2][1]=7-k-l;
					for(flag=1,n=0;n<3&&flag;n++){
						if(a[n][0]*2+a[n][1]==7&&a[n][0]+a[n][1]<7){
							a[n][2]=7-a[n][0]-a[n][1];
							flag=1;
						}
						else flag=0;
					}
					if(flag){
			           for(int t=0;t<3;t++){
			         	printf("%c %d %d %d\n",'A'+t,a[t][0],a[t][1],a[t][2]);
		            	}
	             	}
				}
			}
		}
	}
	return 0;
}
