#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int n,s,r;
}stu;

int com(const void *a, const void *b){
	stu *p=(stu *)a,*q=(stu *)b;
	return p->s-q->s;
}

int cmp(const void *a, const void *b){
	stu *p=(stu *)a,*q=(stu *)b;
	return p->n-q->n;
}

int main(){
	stu s[7]={{1,5,0},{2,3,0},{3,4,0},{4,7,0},{5,3,0},{6,5,0},{7,6,0}};
	qsort(s,7,sizeof(s[0]),com);
	for(int i=0,k=1;i<7;i++){
		if(s[i-1].s<s[i].s){
			++k;
			s[i].r=k;
		}
		else s[i].r=k;
	}
	qsort(s,7,sizeof(s[0]),cmp);
	printf("Number\tScore\tRand\n");
	for(int i=0;i<7;i++){
		printf("%d\t%d\t%d\n",s[i].n,s[i].s,s[i].r);
	}
	return 0;
}


