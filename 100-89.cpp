#include <stdio.h>
#include <math.h>

/*第一种方法 
int main(){
	int n,s=0;
	scanf("%d",&n);
	n=pow(n,3);
	for(int i=1;i<n;i+=2){
		for(int j=i;j<n;j+=2){
			s+=j;
			if(s==n){
				printf("%d = %d +……+ %d",n,i,j);
			}
			if(s>n){
				s=0;
				break;
			}
		}
	}
	return 0;
}

*/

int main(){
	int n,s=0;
	scanf("%d",&n);
	for(int i=n*n-n+1,count=0;count<n;i+=2,count++){
        s+=i;
	}
	if(s==pow(n,3)) printf("yes");
	else printf("no");
	return 0;
}





