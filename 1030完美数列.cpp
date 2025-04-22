#include <stdio.h>
#include <algorithm>
using namespace std;

int main(){
	int n,c1=0,c2=0;
	double p;
	scanf("%d %lf",&n,&p);
	double s[n];
	for(int i=0;i<n;i++){
		scanf("%lf",&s[i]);
	}
	sort(s,s+n);
	for(int j=0;j<n;j++){
		if(s[j]>s[0]*p){
			break;
		}
	    else c1++;
	}
	for(int i=1;i<n;i++){
		for(int j=i+c1;j<n;j++){
		  	if(s[j]<=s[i]*p){
		  		c1++;
			  }
            else  break;
		}
	}
	printf("%d",c1);
	return 0;
}




