# include <stdio.h>
int main(){
	int t,s=0,p=0;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		s=s+9;
		p=p+3;
	 if((i%10==0)&&s>p){
	 	if((i+30)<=t){
	 		p=p+30*3; 
	 		i=i+30;
		 }
		 else{
		 	p=p+(t-i)*3;
		 	break;
		 }
	 }
	}
	if(s>p){
		printf("^_^ %d",s);
	}
	else if(s==p){
		printf("-_- %d",s);
	}
	else printf("@_@ %d",p);
	return 0;
} 
