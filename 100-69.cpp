#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int a[15][4]={0},b[15]={0};
char *name[]={"   ","and wolf","and goat","and cabbage"};
void s(int step){
	int i;
	if(a[step][0]+a[step][1]+a[step][2]+a[step][3]==4){
		for(i=0;i<=step;i++){
			printf("east: ");
			if(a[i][0]==0) printf("wolf ");
			if(a[i][1]==0) printf("goat ");
			if(a[i][2]==0) printf("cabbage ");
			if(a[i][3]==0) printf("farmer ");
			if(a[i][0]&&a[i][1]&&a[i][2]&&a[i][3]) printf("none");
			printf("       west: ");
			if(a[i][0]==1) printf("wolf ");
			if(a[i][1]==1) printf("goat ");
			if(a[i][2]==1) printf("cabbage ");
			if(a[i][3]==1) printf("farmer ");
			if(!(a[i][0]||a[i][1]||a[i][2]||a[i][3]))  printf("none");
			printf("\n\n\n");
			if(i<step){
				printf("         the %d time\n",i+1);
				if(a[i][3]){
					printf("     <----- farmer ");
					printf("%s\n",name[b[i]+1]);
				}
				else{
					printf("      -----> farmer ");
					printf("%s\n",name[b[i]+1]);
				}
			}
		}
		return;
	}
	for(int j=0;j<step;j++){
		if(memcmp(a[j],a[step],16)==0) return ;
	}
	if(a[step][1]!=a[step][3]&&(a[step][1]==a[step][0]||a[step][1]==a[step][2])) return;
	for(i=-1;i<=2;i++){
		b[step]=i;
		memcpy(a[step+1],a[step],16);
		a[step+1][3]=1-a[step][3];
		if(i==-1){
			s(step+1);
		}
		else if(a[step][i]==a[step][3]){
				a[step+1][i]=a[step+1][3];
				s(step+1);
		}
 }
	
}


int main(){
	s(0);
	return 0;
}
