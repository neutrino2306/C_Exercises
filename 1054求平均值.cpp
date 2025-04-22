#include <stdio.h>
#include <stdlib.h>

int f(char c[101]);

int main(){
	int n,k=0;
	char c[101];
	double sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",c);
		if(f(c)){
			sum+=atof(c);
			k++;
		}
		else{
			printf("ERROR: %s is not a legal number\n",c);
		}
	}
	if(k&&k!=1){
		printf("The average of %d numbers is %.2lf",k,1.0*sum/k);
	}
	else if(!k){
		printf("The average of 0 numbers is Undefined");
	}
	else{
		printf("The average of 1 number is %.2lf",sum);
	}
	return 0;
}

int f(char c[101]){
	int flag=1,d=0,n=0;
	for(int i=0;c[i]!='\0';i++){
		if(c[i]=='-'&&i==0){
			continue;
		}
		else if(c[i]=='.'){
			d++;
		}
		else if(c[i]<48||c[i]>57){
			flag=0;
			break;
		}
		else if(d==1){
			n++;
		}
	}
	if(d>1||n>2||(atof(c)<-1000.0||atof(c)>1000.0)){
		flag=0;
    }
	return flag;
}

