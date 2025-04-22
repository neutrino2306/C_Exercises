#include <stdio.h>

typedef struct{
	int addr,data,next;
}node;

int main(){
	int head,n,k,add,data,next,c=0,count=0;
	scanf("%d%d%d",&head,&n,&k);
	node a[100005],b[n],d[n];
	for(int i=0;i<n;i++){
		scanf("%d",&add);
		a[add].addr=add;
		scanf("%d%d",&a[add].data,&a[add].next);
	}
	b[c]=a[head];  //这里重新设了c作为统计有效链表节点个数的变量，是为了防止出现废节点 
	while(b[c++].next!=-1){
		b[c]=a[b[c-1].next];
	}
	for(int i=0;i<c;i++){
		if(b[i].data<0){
			d[count++]=b[i];
		}
	}
	for(int i=0;i<c;i++){
	    if(b[i].data>=0&&b[i].data<=k){
			d[count++]=b[i];
		}	
	}
	for(int i=0;i<c;i++){
		if(b[i].data>k){
			d[count++]=b[i];
		}
	}	
	
	for(int i=0;i<c-1;i++){
		printf("%05d %d %05d\n",d[i].addr,d[i].data,d[i+1].addr);
	}
	printf("%05d %d -1",d[c-1].addr,d[c-1].data);
	return 0;
}
