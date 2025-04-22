
/*
#include <stdio.h>

int main(){
	int n,t;
	scanf("%d",&n);
	int s[n];
	for(int i=0;i<n;i++){
	  scanf("%d",&s[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(s[j]>s[j+1]){
				t=s[j];
				s[j]=s[j+1];
				s[j+1]=t;
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%d",s[i]);
		if((i+1)%4) printf("\t");
		else printf("\n");
	}
	return 0;
}

*/
//这是用选择排序算法写的 

#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int s[n];
	for(int i=0;i<n;i++){
		scanf("%d",&s[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(s[j]<s[i]){
			int t=s[i];
				s[i]=s[j];
				s[j]=t;
				
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%d",s[i]);
		if((i+1)%4) printf("\t");
		else printf("\n");
	}
	return 0;
}
