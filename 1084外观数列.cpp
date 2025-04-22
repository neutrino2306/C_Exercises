#include <stdio.h>
#include <string.h>

int main(){
	int n;
	char a[100000],b[100000];
	scanf("%c%d",&a[0],&n);
	for(int i=1;i<n;i++){
		for(int j=0,count=0,t=0;j<=strlen(a);j++){
			if(j==0||a[j]!=a[j-1]||j==strlen(a)){
			      if(j==strlen(a)){
			      	b[t]=count+'0';
			      	break;
				  }  
				 else if(j) b[t++]=count+'0';
					b[t++]=a[j];
					count=1;                                                                                                                                                                                                                                                  
			}             
			else{
				count++;
			}
		}
		printf("%d %s\n",i,b);
		strcpy(a,b);
	}
	printf("%s",a);
	return 0;
} 
