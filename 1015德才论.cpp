#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int z,d,c,t;
}stu;

int com(const void *a,const void *b);
void p(stu s[],int i);

int main(){
	int n,l,h,a,b,c,d;
	a=b=c=d=0;
	scanf("%d %d %d",&n,&l,&h);
	stu s[1000],dc[n],dsc[n],dsch[n],lj[n];
	for(int i=0;i<n;i++){
	 if(s[i].c>=l&&s[i].d>=l){
	 	s[i].t=s[i].d+s[i].c;
		if(s[i].c>=h&&s[i].d>=h){
			dc[a++]=s[i];
		}
		else if(s[i].d>=h){
			dsc[b++]=s[i];
		}
		else if(s[i].d>=s[i].c){
			dsch[c++]=s[i];
		}
		else {
			lj[d++]=s[i];
		}
	 }
	}
	qsort(dc,a,sizeof(stu),com);
	qsort(dsc,b,sizeof(stu),com);			
	qsort(dsch,c,sizeof(stu),com);
	qsort(lj,d,sizeof(stu),com);
	printf("%d\n",a+b+c+d);
	p(dc,a);
	p(dsc,b);
	p(dsch,c);
	p(lj,d);
	return 0;
}

int com(const void *a,const void *b){
	stu *s=(stu *)a;
	stu *k=(stu *)b;
	int ret;
	if(s->t!=k->t){
		ret=k->t-s->t;
	}
	else if(s->d!=k->d){
		ret=k->d-s->d;
	}
	else{
		ret=s->z-k->z;
	}
	return ret;
}

void p(stu s[],int i){
	for(int j=0;j<i;j++){
		printf("%d %d %d\n",s[j].z,s[j].d,s[j].c);
	}
}




