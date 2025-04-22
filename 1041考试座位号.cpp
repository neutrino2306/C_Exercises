#include <stdio.h>

typedef struct{
	long long z;
	int s,k;
}stu;

int main(){
	int n,m;
	scanf("%d",&n);
	stu ch[n];
	for(int i=0;i<n;i++){
		scanf("%lld %d %d",&ch[i].z,&ch[i].s,&ch[i].k);
	}
	scanf("%d",&m);
	int h[m];
	for(int i=0;i<n;i++){
		scanf("%d",&h[i]);
		for(int j=0;j<n;j++){
			if(ch[j].s==h[i]){
				printf("%lld %d\n",ch[j].z,ch[j].k);
				break;
			}
		}
	}
	return 0;
}
