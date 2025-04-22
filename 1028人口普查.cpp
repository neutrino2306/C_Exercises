/*

#include <stdio.h>
#include <stdlib.h>

int com(const void *a,const void *b);

typedef struct{
	char mz[6];
	int y,m,d,g;
}people;

int main(){
	int c,n,j=0;
	scanf("%d",&n);
	people s[n],a[n];
	c=n;
	for(int i=0;i<n;i++){
		scanf("%s %d/%d/%d",s[i].mz,&s[i].y,&s[i].m,&s[i].d);
		s[i].g=1;
		if(s[i].y<1814||(s[i].y==1814&&s[i].m<9)||(s[i].y==1814&&s[i].m==9&&s[i].d<6)||(s[i].y>2014)||(s[i].y==2014&&s[i].m>9)||(s[i].y==2014&&s[i].m==9&&s[i].d>6)){
			s[i].g=0;
			c--;
		}
		else{
		a[j++]=s[i];
	  }
	}
//	if(c){
//	people a[c];
//	for(int i=0,j=0;i<n;i++){
//		if(s[i].g){
//			a[j++]=s[i];
//		}
//	}
	qsort(a,c,sizeof(a[0]),com);
	printf("%d",c);
	if(c){
	printf(" %s %s",a[0].mz,a[c-1].mz);
}
	return 0;
}

int com(const void *a,const void *b){
   int ret=1;
   people *p=(people *)a;
   people *q=(people *)b;
   if(p->y<q->y||(p->y==q->y&&p->m<q->m)||(p->y==q->y&&p->m==q->m&&p->d<q->d)){
   	ret=-1;
   }	
   return ret;
}

*/

#include <stdio.h>
#include <string.h>

const char mb[11]="2014/09/06",mib[11]="1814/09/06";

int main(){
   int n,c=0;
   scanf("%d",&n);
   char maxb[11]="1814/09/06",minb[11]="2014/09/06",name[6],birth[11],maxn[6],minn[6];
   for(int i=0;i<n;i++){
   	scanf("%s %s",name,birth);
   	if(strcmp(mb,birth)>=0&&strcmp(mib,birth)<=0){
   		c++;
   		if(strcmp(birth,maxb)>=0){
   			strcpy(maxn,name);
   			strcpy(maxb,birth);
		   }
		if(strcmp(birth,minb)<=0){   //注意这里用的是if而非else if，因为如果是else if 就排除了只输入一个数据的情况 
			strcpy(minn,name);
			strcpy(minb,birth);
		}
	   }
	
   }	
   printf("%d",c);
   if(c){
   	printf(" %s %s",minn,maxn);
   }
   return 0;
}


