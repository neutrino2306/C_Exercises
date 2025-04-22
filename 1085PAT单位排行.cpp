
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
typedef struct{
	int p;
	double s;
	char m[7];
}dw;

typedef struct{
	char xm[7];
	double score;
}peo;

int coms(const void *a,const void *b){
	return strcmp(((peo *)a)->xm,((peo *)b)->xm);
}

int comr(const void *a,const void *b);

int main(){
	int n,count=-1;
	scanf("%d",&n);
	dw x[n];
	peo xs[n];
    for(int i=0;i<n;i++){
        x[i].p=0;
        x[i].s=0;
    }
    char xx[n][7];
	for(int i=0;i<n;i++){
		int f;
		char z[7];
		scanf("%s%d%s",z,&f,xx[i]);
		for(int j=0;j<strlen(xx[i]);j++){
			xx[i][j]=tolower(xx[i][j]);
		}
		
		switch(z[0]){
			case 'A':xs[i].score=f;break;	
			case 'B':xs[i].score=f/1.5;break;
			case 'T':xs[i].score=f*1.5;break;
            default:break;
		}
		strcpy(xs[i].xm,xx[i]);
	}
	qsort(xs,n,sizeof(xs[0]),coms);
	for(int i=0;i<n;i++){
		if((i==0)||strcmp(xs[i].xm,xs[i-1].xm)){
			count++;
			strcpy(x[count].m,xs[i].xm);
			x[count].s+=xs[i].score;
			x[count].p++;
		}
		else{
			x[count].p++;
			x[count].s+=xs[i].score;
		}
	}
	qsort(x,count+1,sizeof(x[0]),comr);
	printf("%d\n",count+1);
	for(int i=0,j=0;i<count+1;i++){
		if(i==0||(int)x[i].s!=(int)x[i-1].s){
			j=i+1;
			 printf("%d %s %d %d\n",j,x[i].m,(int)x[i].s,x[i].p);
		} 
		else{
			printf("%d %s %d %d\n",j,x[i].m,(int)x[i].s,x[i].p);
		}
	}
	return 0;
}

int comr(const void *a,const void *b){
   int ret=0;
   dw *s1=(dw *)a,*s2=(dw *)b;
   if(s1->s-s2->s!=0){
   	ret=s2->s-s1->s;
   }
   else if(s1->p-s2->p!=0){
   	ret=s1->p-s2->p;
   }
   else {
   	ret=strcmp(s1->m,s2->m);
   }
   return ret;	
}

*/ 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
typedef struct{
	int p;
	double s;
	char m[7];
}dw;
  
int coms(const void *a,const void *b){
	return strcmp(((dw *)a)->m,((dw *)b)->m);
}

int comr(const void *a,const void *b);

int main(){
	int n,count=1;
	scanf("%d",&n);
	dw x[n],*pp=NULL;
    for(int i=0;i<n;i++){
        x[i].p=0;
        x[i].s=0;
    }
    for(int i=0;i<n;i++){
    	char z[7],xx[7];
    	int f;
    	scanf("%s%d%s",z,&f,xx);
    	for(int j=0;j<strlen(xx);j++){
			xx[j]=tolower(xx[j]);
		}
		qsort(x,count,sizeof(x[0]),coms);
    	pp=(dw*)bsearch(xx,x,count,sizeof(x[0]),coms);
    	if(pp!=NULL){
    		pp->s+=(z[0]=='A')?f:(z[0]=='B'?1.0*f/1.5:f*1.5*1.0);
    		pp->p++;
		}
		else{
			strcpy(x[count-1].m,xx);
			x[count-1].p++;
			x[count-1].s+=(z[0]=='A')?f:(z[0]=='B'?1.0*f/1.5:f*1.5*1.0);
			count++;
		}
	}
    qsort(x,count-1,sizeof(x[0]),comr);
	printf("%d\n",count-1);
	for(int i=0,j=0;i<count-1;i++){
		if(i==0||(int)x[i].s!=(int)x[i-1].s){
			j=i+1;
			 printf("%d %s %d %d\n",j,x[i].m,(int)x[i].s,x[i].p);
		} 
		else{
			printf("%d %s %d %d\n",j,x[i].m,(int)x[i].s,x[i].p);
		}
	}
	return 0;
}

int comr(const void *a,const void *b){
   int ret=0;
   dw *s1=(dw *)a,*s2=(dw *)b;
   if(s1->s-s2->s!=0){
   	ret=s2->s-s1->s;
   }
   else if(s1->p-s2->p!=0){
   	ret=s1->p-s2->p;
   }
   else {
   	ret=strcmp(s1->m,s2->m);
   }
   return ret;	
}








