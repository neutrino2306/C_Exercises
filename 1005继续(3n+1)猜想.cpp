#include <stdio.h>
int main(){
	int n,a[1000]={0},v[1000]={0};
	scanf("%d",&n);
	int s[n],t[n];
	for(int i=0;i<n;i++){
		scanf("%d",&s[i]);
		t[i]=s[i];
	}
 	for(int i=0;i<n;i++){
	 if(a[s[i]]==0){	
	   while(s[i]!=1){          
	     if(s[i]%2!=0){
	    	s[i]=(3*s[i]+1)/2;
	     }
	     else  s[i]=s[i]/2;
	     a[s[i]]=1;
         }
        } 
	 else {                       
       	continue;
	 }
	}
	int count=0;
	for(int i=0;i<n;i++){
		if(a[t[i]]==0){
			v[count]=t[i];	
			count++;
		}
	}
    for(int i=0;i<count;i++){
      for(int j=0;j<count-1-i;j++){
      	if(v[j]<v[j+1]){
      		int b=v[j];
      		v[j]=v[j+1];
      		v[j+1]=b;
		  }
	  }
	}
	for(int i=0;i<count-1;i++) printf("%d ",v[i]);
    printf("%d",v[count-1]);
	return 0;
}
