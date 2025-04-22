#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct{
	char l,str[14];
	int s,code,id,date;
}stu;

int com(const void *a,const void *b){
    stu *p=(stu *)a,*q=(stu *)b;
    int ret=strcmp(p->str,q->str);
    if(p->s-q->s){
    	ret=q->s-p->s;
	}
	return ret;
}
int cmp(const void *a,const void *b){
	int ret=0;
	if(*((int *)a+1)-*((int *)b+1)){
		ret=*((int *)b+1)-*((int *)a+1);
	}
	else ret=*(int *)a-*(int *)b;
	return ret;
}
//注意一下这里二维int数组的比较方法
 
int main(){
	int n,m,d;
	scanf("%d%d",&n,&m);
	stu a[n],b[n];
	char y[7];
	for(int i=0;i<n;i++){
		scanf("%s %d",a[i].str,&a[i].s);
		 sscanf(a[i].str,"%c%3d%6d%3d",&a[i].l,&a[i].code,&a[i].date,&a[i].id);
	}
	for(int i=1;i<=m;i++){
	    scanf("%d %s",&d,y);
		printf("Case %d: %d %s\n",i,d,y);
		if(d==1){
			int t=0;
			for(int j=0;j<n;j++){
				if(a[j].l==y[0]) b[t++]=a[j];
			}
			qsort(b,t,sizeof(b[0]),com);
			for(int j=0;j<t;j++){
				printf("%s %d\n",b[j].str,b[j].s);
			}
			if(!t) printf("NA\n");
		}
		if(d==2){
			int rs=0,score=0;
			for(int j=0;j<n;j++){
				if(a[j].code==atoi(y)){
					score+=a[j].s;
					rs++;
				}
			}
			if(rs) printf("%d %d\n",rs,score);
			else printf("NA\n");
		}
		if(d==3){
			int k[1000]={0},kc[999][2],flag=0,c=0;
			for(int j=0;j<n;j++){
				if(a[j].date==atoi(y)){
					k[a[j].code]++;
					flag=1;
				}
			}
			for(int j=100;j<1000;j++){
			  if(k[j]){
				   kc[c][0]=j;
				   kc[c++][1]=k[j];
				}
			}
			qsort(kc,c,sizeof(kc[0]),cmp);
			if(!flag) printf("NA\n");
			else{
				for(int j=0;j<c;j++){
					printf("%d %d\n",kc[j][0],kc[j][1]);
				}
			}
		}
	}
   return 0;	
} 
