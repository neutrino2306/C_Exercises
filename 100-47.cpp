#include <stdio.h>

int main(){
	int a[3][3];
	a[0][0]=7,a[1][0]=8,a[2][0]=9;
	for(int i=4;i<6;i++){
		for(int j=4;j<7;j++){
			for(int k=4;k<7;k++){
				if(i!=k&&k!=j&&i!=j&&(15-a[0][0]-i!=15-a[1][0]-j&&15-a[1][0]-j!=15-a[2][0]-k&&15-a[0][0]-i!=15-a[2][0]-k)){
					a[0][1]=i;
					a[0][2]=15-a[0][0]-i;
					a[1][1]=j;
					a[1][2]=15-a[1][0]-j;
					a[2][1]=k;
					a[2][2]=15-a[2][0]-k;
				}
			}
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(a[i][j]==1){
				switch(i){
					case 0:printf("z");break;
					case 1:printf("w");break;
					case 2:printf("l");break; 
				}
			}
		}
	}
	return 0;
} 
