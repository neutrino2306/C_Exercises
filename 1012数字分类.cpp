#include <stdio.h>

void f(int t);

int main(){
	int n,s1=0,s2=0,c1=0,c2=0,s3=0,c3=0,m=0;
	scanf("%d",&n);
	int s[n];
	for(int i=0;i<n;i++){
		scanf("%d",&s[i]);
	}
	for(int i=0;i<n;i++){
	   switch(s[i]%5){
	   	case 0:
	   		if(!(s[i]%2)){
	   			s1+=s[i];
			   }
			break;
		case 1:
			c1++;
			if(c1%2) s2+=s[i];
			else s2-=s[i];
			break;
		case 2:
			c2++;
			break;
		case 3:
			s3+=s[i];
			c3++;
			break;
		case 4:
			if(m<s[i]) m=s[i];
			break;
	   }
	}
	f(s1);
	if(c1) printf("%d ",s2);
	else printf("N ");
	f(c2);
	if(c3) printf("%.1f ",1.0*s3/c3);
	else printf("N ");
	if(m) printf("%d",m);
	else printf("N");
	return 0;
} 
void f(int t){
	if(t) printf("%d ",t);
	else printf("N ");
}
