/*
#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int addr;
	int data;
	int next;
	int g1;
	int g2;
}list;

int com(const void *a,const void *b);

int main(){
	int head,n,k;
	scanf("%d %d %d",&head,&n,&k);
	list a[100000],b[n];
	for(int i=0;i<n;i++){
	  int addr;
	  scanf("%d",&addr);
	  a[addr].addr=addr;
	  scanf("%d %d",&a[addr].data,&a[addr].next);
	}
	
	int c=0;
	b[0]=a[head];
	b[0].g1=0;
	b[0].g2=1;
	while(b[c].next!=-1){
		c++;
		b[c]=a[b[c-1].next];
		b[c].g1=c/k;
		b[c].g2=c%k;
	}
	qsort(b,(c+1)/k*k,sizeof(list),com);
	
	for(int i=0;i<c;i++){
		printf("%05d %d %05d\n",b[i].addr,b[i].data,b[i+1].addr);
	}
	printf("%05d %d -1",b[c].addr,b[c].data);
	
	return 0;
}

int com(const void *a,const void *b){
	list *x=(list *)a;
	list *y=(list *)b;
	int ret;
	if(y->g1!=x->g1){
		ret=x->g1-y->g1;
	}
	else{
		ret=y->g2-x->g2;
	}
	return ret;
}

  */


#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int addr;
	int data;
	int next;
	int g1;
	int g2;
}list;

int cmp(const void *a,const void *b);
int com(const void *a,const void *b);

int main(){
	int head,n,k,c=0;
	scanf("%d %d %d",&head,&n,&k);
	list a[n];
	for(int i=0;i<n;i++){
		scanf("%d %d %d",&a[i].addr,&a[i].data,&a[i].next);
		a[i].g1=i/k;
		a[i].g2=i%k;
		c++;
	}

	for(int j=0;j<n-1;j++){
		for(int k=0;k<n-1-j;k++){
			if(a[k].data>a[k+1].data){
				int t=a[k].data;
				a[k].data=a[k+1].data;
				a[k+1].data=t;
			}
		}
	}
	qsort(a,(c+1)/k*k,sizeof(list),com);
	
	for(int i=0;i<c-1;i++){
		printf("\n%05d %d %05d\n",a[i].addr,a[i].data,a[i+1].addr);
	}
	printf("%05d %d -1",a[c-1].addr,a[c-1].data);
	
	return 0;
}


int com(const void *a,const void *b){
	list *x=(list *)a;
	list *y=(list *)b;
	int ret;
	if(y->g1!=x->g1){
		ret=x->g1-y->g1;
	}
	else{
		ret=y->g2-x->g2;
	}
	return ret;
}








