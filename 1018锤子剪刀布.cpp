#include <stdio.h>

typedef struct{
	int C,J,B;
}sheng;

void com(sheng s);

int main (){
	int n,p=0;
	sheng j,y;
	scanf("%d",&n);
	char a[n],b[n];
	for(int i=0;i<n;i++){
		getchar();
		scanf("%c %c",&a[i],&b[i]);
		if(a[i]==b[i]){
		  p++;	
		}
		else if(a[i]=='C'){
			if(b[i]=='B'){
				y.B++;
			}
			else if(b[i]=='J'){
				j.C++;
			}
		}
		else if(a[i]=='B'){
			if(b[i]=='J'){
				y.J++;
			}
			else if(b[i]=='C'){
				j.B++;
			}
		}
		else if(a[i]=='J'){
			if(b[i]=='C'){
				y.C++;
			}
			else if(b[i]=='B'){
				j.J++;
			}
		}
	}
	printf("%d %d %d\n",j.B+j.C+j.J,p,y.B+y.C+y.J);
	printf("%d %d %d\n",y.B+y.C+y.J,p,j.B+j.C+j.J);
	com(j);
	printf(" ");
	com(y);
	return 0;
}

void com(sheng s){
	if(s.J>s.B&&s.J>s.C) printf("J");
	else if((s.B>s.J&&s.B>s.C)||(s.B==s.C&&s.B>s.J)||(s.B==s.J&&s.B>s.C)||(s.B==s.C&&s.B==s.J)) printf("B");
	else if((s.C>s.B&&s.C>s.J)||(s.C==s.J&&s.C>s.B))printf("C");
}


