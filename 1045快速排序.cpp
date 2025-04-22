#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
	int n,count=0,flag;
	scanf("%d",&n);
	long long s[n],d[n],c[n],max=0;
	for(int i=0;i<n;i++){
		scanf("%d",&s[i]);
		d[i]=s[i];
	}
    sort(d,d+n);
    for(int i=0;i<n;i++){
    	if(max<s[i]){
    		max=s[i];
		}
		if(d[i]==s[i]&&max==s[i]){
			c[count++]=s[i];
		}
	}
	printf("%d\n",count);
	for(int i=0;i<count;i++){
		if(i==count-1) printf("%d",c[i]);
		else printf("%d ",c[i]);
	}
	printf("\n");
	return 0;
}
