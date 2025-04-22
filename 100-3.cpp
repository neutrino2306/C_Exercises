#include <stdio.h>

int f(int a);

int main(){
	int n,y,r,d=0,ret,s[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d%d%d",&n,&y,&r);
	for(int i=1990;i<=n;i++){
		if(i==n){
			if(f(n)) s[2]++;
			for(int j=1;j<=y;j++){
			   if(j!=y)	d+=s[j];
			   else d+=r;
			}
		}
		else{
			if(f(i)) d+=366;
			else d+=365;
		}
	}
	ret=d%5;
	if(ret==4||ret==0){
		printf("今天晒网");
    }
    else printf("今天打渔"); 
	return 0;
}

int f(int a){
    int ret=0;
	if((a%4==0&&a%100!=0)||(a%400==0))	ret=1;
	return ret;
}


