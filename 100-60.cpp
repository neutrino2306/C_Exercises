#include <stdio.h>
int n=0;
void p(int a[]){
	printf("No. %2d:¡­¡­¡­¡­¡­¡­¡­¡­.\n",n++);
	for(int i=0;i<7;i++){
		printf(" | %c",a[i]==1?'*':(a[i]==2?'@':' '));
	}		
	printf("\n¡­¡­¡­¡­¡­¡­¡­¡­¡­¡­¡­¡­¡­¡­\n \n");
}

void change(int *n,int *m){
	int t;
	t=*n;
    *n=*m;
    *m=t;
}
int main(){
    int c[7]={1,1,1,0,2,2,2};
    int i,flag;
    p(c);
    while(c[0]+c[1]+c[2]!=6||c[4]+c[5]+c[6]!=3){
    	flag=1;
    	for(i=0;flag&&i<5;i++){
    		if(c[i]==1&&c[i+1]==2&&c[i+2]==0){
    			change(&c[i],&c[i+2]);
    			p(c);
    			flag=0;
			}
		}
		for(i=0;flag&&i<5;i++){
				if(c[i]==0&&c[i+1]==1&&c[i+2]==2){
					change(&c[i],&c[i+2]);
					p(c);
					flag=0;
				}
			}
		for(i=0;i<6&&flag;i++){
					if(c[i]==1&&c[i+1]==0&&(i==0||c[i-1]!=c[i+2])){
						change(&c[i],&c[i+1]);
						p(c);
						flag=0;
					}	
				}
		for(i=0;i<6&&flag;i++){
						if(c[i]==0&&c[i+1]==2&&(i==5||c[i-1]!=c[i+2])){
							change(&c[i],&c[i+1]);
							p(c);
							flag=0;
			}
		}
	}
	return 0;
}
