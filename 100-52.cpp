#include <stdio.h>

int main(){
	for(int a=0;a<2;a++){
	  for(int b=0;b<2;b++){
	  	for(int c=0;c<2;c++){
	  		for(int d=0;d<2;d++){
	  			for(int e=0;e<2;e++){
	  				for(int f=0;f<2;f++){
	  					if((a+b)>0&&(a+d)<2&&(a+e+f)==2&&b==c&&c!=d&&(d+e==0||d==1)){
	  						printf("A %s\n",a==1?"ȥ":"��ȥ");
	  						printf("B %s\n",b==1?"ȥ":"��ȥ");
	  						printf("C %s\n",c==1?"ȥ":"��ȥ");
	  						printf("D %s\n",d==1?"ȥ":"��ȥ");
	  						printf("E %s\n",e==1?"ȥ":"��ȥ");
	  						printf("F %s\n",f==1?"ȥ":"��ȥ");
						}
					  }
				  }
			  }
		  }
	  }
	}
	return 0;
}
