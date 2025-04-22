# include <stdio.h>
int main(){
	int n,u,d,t=0,l=0;
	scanf("%d %d %d",&n,&u,&d);
	for(;;){
	    t=t+1;
		l=u+l;
		if(l>=n){
			printf("%d",t);
			break;
		}
		else{
		l=l-d;
		t++;
		}
	}
	return 0;
} 
