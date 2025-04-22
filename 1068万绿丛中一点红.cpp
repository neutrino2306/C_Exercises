#include <stdio.h>
#include <math.h>

int judge(int a[][1002],int x,int y,int t);
int c[2<<24]={0},a[1002][1002]={0};
int main(){
	int m,n,t,x,y,colour,count=0;
	scanf("%d%d%d",&m,&n,&t);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
			c[a[i][j]]++;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(c[a[i][j]]==1){
			  if(judge(a,j,i,t)){
			  	count++;
			  	x=j+1;
			  	y=i+1;
			  	colour=a[i][j];
			  }
			  if(count==2){
			  	break;
			  }
			}
		}
		if(count==2){
			break;
		}
	}
	if(count==2){
		printf("Not Unique");
	}
	else if(!count){
		printf("Not Exist");
	}
	else{
		printf("(%d, %d): %d",x,y,colour);
	}
	
	return 0;
}

int judge(int a[][1002],int x,int y,int t){
	int ret=1;
	if(abs(a[y][x]-a[y-1][x-1])<=t||
	   abs(a[y][x]-a[y][x-1])<=t||
       abs(a[y][x]-a[y+1][x-1])<=t||
	   abs(a[y][x]-a[y-1][x])<=t||
	   abs(a[y][x]-a[y+1][x])<=t||
	   abs(a[y][x]-a[y-1][x+1])<=t||
	   abs(a[y][x]-a[y][x+1])<=t||
	   abs(a[y][x]-a[y+1][x+1])<=t){
	   	ret=0;
	   } 
	   return ret;
}



