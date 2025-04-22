#include <stdio.h>

int main(){
	int s[10]={10,2,8,22,16,4,10,6,14,20},a[10]={0},flag=0,count=0;
	do{
		flag=0;
		for(int i=0;i<10;i++){
		if(s[i]%2==0){
			s[i]/=2;
			a[i]=s[i];
		}
		else {
			s[i]=(s[i]+1)/2;
			a[i]=s[i];
		}
    	}
	   for(int i=0;i<9;i++){
		s[i+1]+=a[i];
    	}
	    s[0]+=a[9];
       for(int i=0,m=s[0];i<10;i++){
       	if(m!=s[i]) flag=1;
		printf("%d\t",s[i]);
    	}
	    printf("\n");
		count++;
	}while(flag);
	printf("%d",count);
	return 0;
}
