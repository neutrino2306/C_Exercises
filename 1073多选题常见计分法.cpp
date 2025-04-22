#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	int s,c,r,x[5];
}ques;

int main(){
	int m,n,max=0;
	scanf("%d%d",&n,&m);
	ques q[m];
	int e[m][5];
	
	for(int i=0;i<m;i++){
		for(int j=0;j<5;j++){
			q[i].x[j]=0;
			e[i][j]=0;
		}
	}
	for(int i=0;i<m;i++){
		scanf("%d%d%d",&q[i].s,&q[i].c,&q[i].r);
		char ch;
		for(int j=0;j<q[i].r;j++){
			scanf(" %c", &ch);
            q[i].x[ch-'a']++;
		}
	}
	for(int i=0;i<m;i++){
		printf("%d%d%d",q[i].s,q[i].c,q[i].r);
		printf("%s  asdasd\n",q[i].x);
	}
	for(int i=0;i<n;i++){
		getchar();
		double d=0.0;
		for(int j=0;j<m;j++){
			int xx[5]={0},co,paright=0,right=1;
			char ch;
			scanf("(&d",&co);
			for(int k=0;k<co;k++){
				scanf(" %c",&ch);
				xx[ch-'a']=1;
			}
			for(int k=0;k<5;k++){
				if(q[j].x[k]==1&&xx[k]==0){
					paright=1;
					e[j][k]++;
				}
				else if(q[j].x[k]==0&&xx[k]==1){
					right=0;
					e[j][k]++;
				}
				if(max<e[j][k]){
					max=e[j][k];
				}
			}
			scanf(")");
			if(j!=m-1) scanf(" ");
			if(right){
				if(paright){
				d+=1.0*q[j].s/2;
			    }
			    else d+=q[j].s;
			}
		}
		printf("%.1lf\n",d);
	}
	if(!max)printf("Too simple");
	else{
		for(int i=0;i<m;i++){
			for(int j=0;j<5;j++){
				if(e[i][j]==max){
					printf("%d %d-%c\n",max,i+1,'a'+j);
				}
			}
		}
	}
	return 0;
} 
