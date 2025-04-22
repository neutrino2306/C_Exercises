#include <stdio.h>
int main(){
	int s[10];
	for(int i=0;i<10;i++){
		scanf("%d",&s[i]);
	}
	if(s[0]){
	  for(int i=1;i<10;i++){
	  	if(s[i]){
	  		printf("%d",i);
	  		s[i]--;
	  		break;
		  }
	  }
	}
		for(int i=0;i<10;i++){
			while(s[i]){
				printf("%d",i);
				s[i]--;
			}
		}
	return 0;
}
