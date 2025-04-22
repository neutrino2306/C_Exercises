#include <stdio.h>
#include <math.h>

int f(int n);

int main(){
	int n,k,c;
	scanf("%d",&n);
	int s[10000]={0},ch[n];
	for(int i=0;i<n;i++){
		scanf("%d",&ch[i]);
		s[ch[i]]++;
	}
	scanf("%d",&k);
	for(int i=0;i<k;i++){
		scanf("%d",&c);
		int flag=0;
		for(int j=0;j<n;j++){
			if(c==ch[0]&&s[ch[0]]){
				printf("%04d: Mystery Award\n",c);
				s[ch[0]]--;
				flag=1;
			}
			else if(c==ch[j]&&s[ch[j]]&&f(j)){
				printf("%04d: Minion\n",c);
				s[ch[j]]--;
				flag=1;
			}
			else if(c==ch[j]&&s[ch[j]]&&!f(j)){
				printf("%04d: Chocolate\n",c);
				s[ch[j]]--;
				flag=1;
			}
			else if(c==ch[j]&&s[ch[j]]<=0){
				printf("%04d: Checked\n",c);
				flag=1;
			}
		}
		if(!flag){
			printf("%04d: Are you kidding?\n",c);
		}
	}
	return 0;
}

int f(int n){
    int ret=0,count=0,t=n+1;
	for(int i=1;i<=sqrt(t);i++){
		if(t%i==0){
			count++;
		}
	}	
	if(count==1&&n!=1) ret=1;
	return ret;
}


