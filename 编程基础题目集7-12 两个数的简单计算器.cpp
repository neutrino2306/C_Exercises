# include <stdio.h>
int main(){
	int a,b;
	char c;
	scanf("%d %c %d",&a,&c,&b);
	if(c=='+'){
		printf("%d",a+b);
	}
	else if(c=='-'){
		printf("%d",a-b);
	}
		else if(c=='*'){
		printf("%d",a*b);
	}
		else if(c=='/'){
		printf("%d",a/b);
	}
		else if(c=='%'){
		printf("%d",a%b);
	}
	else  	printf("ERROR");
	return 0;
}
