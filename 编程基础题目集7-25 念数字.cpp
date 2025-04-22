# include <stdio.h>

int main(){
	int n,b[9],count;
	char a[10][5]={'ling','yi','er','san','si','wu','liu','qi','ba','jiu'};
	scanf("%d",&n);
	if(n<0){
		printf("fu ");
		n=-n;
	}
    for(count;n>0;count++){
    	b[count]=n%10;
    	n/=10;
//    	printf("%d\t",b[i]);
	}
//	printf("%d",count);
	for(int j=count-1;j>=0;j--){
	 if(j){
	 	printf("%s ",a[b[j]-'0']);
	 }
	 else printf("%s",a[b[j]-'0']);
	}
	return 0;
} 
