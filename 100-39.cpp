#include <stdio.h>
#include <math.h>

int main(){
	int s[2000]={0},t=0;
	for(int i=1;i<2001;i++){
		int c=0;
		for(int j=1;j<=sqrt(i);j++){
			if(i%j==0) c++;
		}
		if(c==1&&i!=1) s[t++]=i;
	}
	for(int i=2,count=0;i<=2000;i+=2){
		for(int j=0;j<t;j++){
			for(int k=j;k<t;k++){
				if(s[j]+s[k]==i){
					count++;
				printf("%d=%d+%d",i,s[j],s[k]);
				if(count%4) printf("\t");
				else printf("\n");
				goto next;	
				}
			}
		}
		next:
			continue;
	}
	return 0;
}
