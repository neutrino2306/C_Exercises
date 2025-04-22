# include <stdio.h>
int main(){
	 
	int a,b,sum=0,count=1;
	scanf("%d %d",&a,&b);
	for( int i=a;i<=b;i++){
		printf("%5d",i);
		sum+=i;
		if(count%5==0){
			printf("\n");
		}
		count++;
	}
	if(count%5==1){
		printf("Sum = %d",sum);
	}
    else printf("\nSum = %d",sum);
	return 0;
} 
