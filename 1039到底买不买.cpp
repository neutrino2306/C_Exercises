#include <stdio.h>
#include <string.h>

int main(){
	char y,t1[1001],h1[1001];
	int t[130]{0},h[130]={0},c=0,s=0,flag=0;
	gets(t1);
	gets(h1);
	for(int i=0;i<strlen(t1);i++){
		t[t1[i]]++;
	}
	for(int i=0;i<strlen(h1);i++){
		h[h1[i]]++;
	}
	for(int i=0;i<130;i++){
		if(t[i]){
		  for(int j=0;j<130;j++){
		  	if(i==j){
		  		h[j]-=t[i];
		  		break;
			  }
		  }
		}
	}
	for(int i=0;i<130;i++){
		if(h[i]>0){
			c+=h[i];
			flag=1;
		}
		if(h[i]<0){
			s+=(-h[i]);
		}
		
	}
	if(flag){
		printf("No %d",c);
	}
	else printf("Yes %d",s);
	return 0;
}
