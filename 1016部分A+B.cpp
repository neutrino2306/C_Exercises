#include <stdio.h>

int f(int a,int da);

int main(){
	int a,da,b,db;
	scanf("%d %d %d %d",&a,&da,&b,&db);
	printf("%d",f(a,da)+f(b,db));
	return 0;
}
int f(int a,int da){
	int t=0,pa=0,mask=1;
	for (int i=0;a>0;i++){
	  t=a%10;
	  if(t==da){
	  	pa=pa+t*mask;
	  	mask*=10;
	  }
	  a/=10;
	} 
	return pa;
}



/*  以下是自己想用字符串的方法解决这道题，但是之前一直没搞出来，大佬帮我修改了一下子
这是正确的最终版本：
#include <stdio.h>
int f(int c,char ch);

int main(){
    int c1=0,c2=0;
    char a[15]={0},b[15]={0},da,db;
    scanf("%s %c %s %c",a,&da,b,&db);
    for(int i=0;i<15;i++){
        if(a[i]==da){ c1++; }
        if(b[i]==db){ c2++; }
    }
    printf("%d",f(c1,da)+f(c2,db));

    return 0;
}

int f(int c,char ch){
    int mask=0;
    for(int i=0;i<c;i++){
        mask=mask*10+(ch-48);
    }
    return mask;
}
   */ 
