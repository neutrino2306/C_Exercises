#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
	char mz[21];
	int gp,gm,gf,g;
}stu;

int com0(const void *a,const void *b){
	stu *p=(stu *)a, *q=(stu *)b;
	return strcmp(p->mz,q->mz);
}

int com(const void *a,const void *b);

int main(){
	int p,m,n,f;
	scanf("%d%d%d",&p,&m,&n);
	stu s[p],* pp=NULL;
	char sn[21];
	for(int i=0;i<p;i++){
		scanf("%s %d",s[i].mz,&s[i].gp);
        s[i].gf=-1;
        s[i].gm=-1;
        s[i].g=0;
	}
	qsort(s,p,sizeof(s[0]),com);
	for(int i=0;i<m;i++){
		scanf("%s %d",sn,&f);
		pp=(stu *)bsearch(sn,s,p,sizeof(s[0]),com0);
		if(pp!=NULL){
			pp->gm=f;
		}
	}
	for(int i=0;i<n;i++){
		scanf("%s %d",sn,&f);
		pp=(stu *)bsearch(sn,s,p,sizeof(s[0]),com0);
		if(pp!=NULL){
			pp->gf=f;
		}
	}
	for(int i=0;i<p;i++){
		if(s[i].gp>=200){
			if(s[i].gm>s[i].gf){
				s[i].g=(int )(1.0*s[i].gm*0.4+1.0*s[i].gf*0.6+0.5);
			}
			else s[i].g=s[i].gf;
		}
	}
	qsort(s,p,sizeof(s[0]),com);
    for(int i=0;i<p;i++){
    	if(s[i].g<60){
    		break;
		}
		else{
			printf("%s %d %d %d %d\n",s[i].mz,s[i].gp,s[i].gm,s[i].gf,s[i].g);
		}
	}
	return 0;
}

int com(const void *a,const void *b){
    stu *p=(stu *)a,*q=(stu *)b;
	int ret;
	if(p->g-q->g){
		ret=q->g-p->g;
	}	
	else ret=strcmp(p->mz,q->mz);
	return ret;
}

