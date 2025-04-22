#include <stdio.h>

int main(){
	int n,m,g,s;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&g);
		int sum=0,max=0,min=m+1,c=0;
		for(int j=0;j<n-1;j++){
			scanf("%d",&s);
			if(s>=0&&s<=m){
				if(max<s){
					max=s;
				}
				if(min>s){
					min=s;
				}
				sum+=s;
				c++;
			}
		}
	   printf("%d\n",(int)(((sum-max-min)*1.0/(c-2)+g)/2+0.5));
	}
	return 0;
}
