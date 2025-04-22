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


