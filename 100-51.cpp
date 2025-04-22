#include <stdio.h>

int main(){
	int a[7][7];
	char *s[7]={" ","美国","英国","法国","德国","意大利","俄罗斯"};
	for(int i=0;i<7;i++){
		for(int j=0;j<7;j++){
			a[j][i]=i;
		}
	}
	for(int i=1;i<7;i++){
		a[0][i]=1;
	}
	a[1][1]=a[2][1]=a[3][1]=a[5][1]=0;
	a[1][3]=a[2][3]=a[3][3]=0;
	a[1][4]=a[2][4]=a[3][4]=a[5][4]=a[6][4]=0;
	a[3][5]=0;
	a[1][6]=a[3][6]=0;
	while(a[0][1]||a[0][2]||a[0][3]||a[0][4]||a[0][5]||a[0][6]){	
	  for(int i=1,y,x,t=-1;i<7;i++){
	    if(a[0][i]){
	    	t=-1;
	      for(int j=1;j<7;j++){
	      	if(a[j][i]){
	      	   t++;
			   x=j;
			   y=i;	
		    }
		  }
		  if(!t){
		  	a[0][y]=0;
		  	for(int j=1;j<7;j++){
		  		if(j!=y){
		  			a[x][j]=0;
				  }
			  }
		  }
		}
      }
	}
	for(int i=1;i<7;i++){
		for(int j=1;j<7;j++){
			if(a[i][j]) printf("%c %s\n",'A'+i-1,s[a[i][j]]);
		}
	} 
	return 0;
}
