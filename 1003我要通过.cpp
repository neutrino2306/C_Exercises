#include <stdio.h>
#include <string.h>

int judge(char *l);

int main(){
	
	int n;
	scanf("%d",&n);
	char s[n][101];
	for (int i=0;i<n;i++){
		scanf("%s",&s[i]);
	}
	for(int i=0;i<n;i++){
		if(judge(s[i])){
			printf("YES");
		}
		else printf("NO");
		if(i!=(n-1))  printf("\n");
	}
	return 0;
}

int judge(char *l){
	int t=1,c1=0,c2=0,c3=0,x=0,y=0,z=0,sp,st,sa;
	char *k=l;
	for(int i=0;*l!='\0';l++,i++){
	  if(*l!='P'&&*l!='T'&&*l!='A'){
	  	t=0;
	  	break;
	  }
	  if(*l=='P'){
	  	x++;
	  	sp=i;
	  } 
	  else if(*l=='A') {
	    y++;
	    sa=i;
	  }
	  else if(*l=='T') {
	  	z++;
	  	st=i;
	  }
	}
	if(x!=1||z!=1||y<1||sp>st||(y==1&&sa<sp)) t=0;
	if(t){
	for(int i=0;*k!='\0';i++,k++){
	 if(i<sp) c1++;
	 else if(i>sp&&i<st) c2++;
	 else if(i>st) c3++;
	 if(c1*c2==c3) t=1;
	 else t=0;
	}
	}
	return t;
}



