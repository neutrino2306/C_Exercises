#include <stdio.h>

typedef struct{
	char m[11],s[11],x,g[16],d[16];
}peo;

int main(){
	int n,k,p;
	scanf("%d",&n);
	peo a[n];
	for(int i=0;i<n;i++){
		scanf("%s %s %s %s %s",a[i].m,a[i].s,&a[i].x,a[i].g,a[i].d);
	}
	scanf("%d",&k);
	for(int i=0;i<k;i++){
		scanf("%d",p);
		if(p<n&&p>0){
			printf("%s %s %s %s %s\n",a[p].m,a[p].g,a[p].d,a[p].x,a[p].s);
		}
		else printf("Not Found");
	}
	return 0;
}
