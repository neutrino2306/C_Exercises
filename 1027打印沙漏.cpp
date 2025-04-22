#include  <stdio.h>

int main(){
	int n,l=1,sum=1,r;
	char s;
	scanf("%d %c",&n,&s);
	n=n-1;
	for(int i=2;;i++){
		sum+=2*(2*i-1);
		r=n-sum;
		l++;
		if(r<0){
			sum-=2*(2*i-1);
			r=n-sum;
			l--;
			break;
		} 
		else if(r==0) break;
	}
//	printf("%d %d",l,r+1);
    for(int i=l;i>0;i--){
    	for(int j=0;j<l-i;j++){
    		printf(" ");
		}
		for(int k=0;k<2*i-1;k++){
			printf("%c",s);
		}
		printf("\n");
	}
    for(int i=2;i<=l;i++){
    	for(int j=0;j<l-i;j++){
    		printf(" ");
		}
		for(int k=0;k<2*i-1;k++){
			printf("%c",s);
		}
		printf("\n");
	}
	printf("%d",r+1);  
	return 0;
}
