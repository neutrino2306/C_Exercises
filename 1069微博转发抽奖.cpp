#include <stdio.h>
#include <string.h>
int main(){
	int m,n,s,count=0;
	scanf("%d%d%d",&m,&n,&s);
	char nc[m][21],zj[m][21];
	for(int i=0,flag=1,t=0;i<m;i++){
		scanf("%s",nc[i]);
         if(i==s-1+count*n+t){
		   for(int j=0;j<count;j++){
		   	if(strcmp(nc[i],zj[j])==0){
		   		t++;      
		   		flag=0;
		   		break;
			   }
		   }
		   if(flag){
		   	strcpy(zj[count++],nc[i]);
		   }
		}
	}
	if(count){
		for(int i=0;i<count;i++){
			printf("%s",zj[i]);
			if(i!=count-1) printf("\n");
		}
	}
	else printf("Keep going...");
	return 0;
}
