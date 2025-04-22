# include <stdio.h>
int main(){
	const int number=10;
	int n,count[number];
	scanf("%d",&n);
	for(int i=0;i<number;i++){
		count[i]=0;
	}
	while(n!=-1){
		if(n>=0&&n<=9){
		  count[n]++;
		}
		scanf("%d",&n);
	}
	for(int i=0;i<number;i++){
		printf("%d:%d\n",i,count[i]);
	}
	return 0;
}
