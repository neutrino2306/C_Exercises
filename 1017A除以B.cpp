#include <stdio.h>
int main(){
	int n,t,r,j=0;
	char a[1001]={0},b[1001]={0};
	scanf("%s%d",a,&n);
	for(int i=0;a[i]!='\0';i++){
		if(a[i+1]!='\0'&&a[i]-48<n){
			t=(a[i]-48)*10+(a[i+1]-48);
			a[i+1]=t%n+48;
			b[j]=t/n+48;
			j++;
		}
		else if(a[i+1]!='\0'&&a[i]-48>=n){
			b[j]=(a[i]-48)/n+48;
			a[i]=(a[i]-48)%n+48;
			j++;
			i--;
		}
		else if(a[i+1]=='\0'&&a[i]-48<n){
			r=a[i]-48;
			b[j]==0;

		}
		else if(a[i+1]=='\0'&&a[i]-48>=n){
			b[j]=(a[i]-48)/n+48;
			r=(a[i]-48)%n;
		}
	}
	if(j){
        for(int i=0;i<j;i++){
		printf("%c",b[i]);
	}
    }
    else printf("0");
	printf(" %d\n",r);
	return 0;
}
