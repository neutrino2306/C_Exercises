#include <stdio.h>
#include <string.h>

int main(){
	char c,s[11][5],y[11][5],k[11][5];
	int n,cs=0,cy=0,ck=0;
	while((c=getchar())!='\n'){
	  if(c=='[') scanf("%[^]]",s[cs++]);
	}
	while((c=getchar())!='\n'){
	  if(c=='[') scanf("%[^]]",y[cy++]);
	}
	while((c=getchar())!='\n'){
	  if(c=='[') scanf("%[^]]",k[ck++]);
	}
	for(int i=0;i<cs;i++){
		printf("%s  ",s[i]);
	}
	scanf("%d",&n);
	int b[n][5];
	for(int i=0;i<n;i++){
		for(int j=0;j<5;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(int i=0;i<n;i++){
	    if(b[i][0]<1||b[i][0]>cs||b[i][1]<1||b[i][1]>cy||b[i][2]<1||b[i][2]>ck||b[i][3]<1||b[i][3]>cy||b[i][4]<1||b[i][4]>cs){
				printf("Are you kidding me? @\\/@\n");
				continue;
			}
		for(int j=0;j<5;j++){
			if(j==0||j==4){ 
				printf("%s",s[--b[i][j]]);
			}
			else if(j==1){
				printf("(%s",y[--b[i][j]]);
			}
			else if(j==2){
				printf("%s",k[--b[i][j]]);
			}
			else if(j==3){
				printf("%s)",y[--b[i][j]]);
			}
			
		}
		if(i!=n-1) printf("\n");
	}
	return 0;
}	
