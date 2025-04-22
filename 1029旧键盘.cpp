#include <stdio.h>
#include <string.h>

int main(){
    char a[81],b[81],c[81];
    int n=0;
    gets(a);
    gets(b);
    for(int i=0,j=0;i<strlen(a);i++){
    	if(a[i]==b[j]){
		   j++;	
		}
		else{
			c[n++]=a[i];
		}
	}
    for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
      	if(c[i]==c[j]){
      		c[j]=0;
		  }
		  else if(c[i]>96&&((c[i]-32)==c[j])){
		  	c[j]=0;
		  }
		  else if(c[j]>96&&(c[j]-32)==c[i]){
		  	c[j]=0;
		  }
	  }
	}
	for(int i=0;i<n;i++){
	  while(c[i]){
	  	if(c[i]<65){
			printf("%c",c[i]);
            break;
		}
		else if(c[i]>96){
			printf("%c",c[i]-32);
            break;
		}
		else {
            printf("%c",c[i]); 
            break;
        }
	  }
	}
	return 0;
}
