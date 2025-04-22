#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	int s,g;
	char x[10];
}tm;

int com(const void *a,const void *b){
	return *(int *)b-*(int *)a;
}

int main(){
	int n,m,flag=0,max=1;
	scanf("%d %d",&n,&m);
	tm t[m];
	int ss[n]={0},wt[m]={0};
	for(int i=0;i<m;i++){
		scanf("%d%d",&t[i].s,&t[i].g);
		getchar();
		gets(t[i].x);
	}

	for(int i=0;i<n;i++){
	    char c,ch[m][100];
	    int j=0;
     	while((c=getchar())!='\n'){
	     if(c=='(') scanf("%[^)]",ch[j++]);
    	}
    	for(j=0;j<m;j++){
    	  if(strcmp(ch[j],t[j].x)!=0){
    	  	wt[j]++;
    	  	flag=1;
		  }
		  else{
		  	ss[i]+=t[j].s;
		  }
		}
	}
	for(int i=0;i<m;i++){
		if(max<wt[i]){
			max=wt[i];
		}
	}
	for(int i=0;i<n;i++){
		printf("%d\n",ss[i]);
	}
	qsort(wt,m,sizeof(wt[0]),com);
	if(!flag){
		printf("Too simple");
    }
	else{
		printf("%d ",max);
		for(int j=0;j<m;j++){
			if(wt[j]==max){
				printf("%d",j+2);
				if(wt[j]==max&&wt[j+1]==max)
				printf(" ");
			}
		}
	}
	return 0;
}
