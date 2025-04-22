/*
#include <stdio.h>

int main(){
	int s[30]={1,1,0},count=3;
	printf("%d\t%d\t",s[0],s[1]);
	for(int i=2;i<30;i++,count++){
	  s[i]=s[i-1]+s[i-2]; 
	  if(count%4) printf("%d\t",s[i]);
	  else printf("%d\n",s[i]);
	}
	return 0;
}
*/
//这里有一个更好的方法
#include <stdio.h>
int main(){
    int a=1,b=1;
    for(int i=1;i<=15;i++){
    	printf("%d\t%d",a,b);
    	if(i%2==0) printf("\n");
    	else printf("\t");
    	a=a+b;
    	b=a+b;
	}
	return 0;
}
