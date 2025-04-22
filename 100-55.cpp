#include <stdio.h>

int main(){
	for(int a=0;a<2;a++){
		for(int b=0;b<2;b++){
			for(int c=0;c<2;c++){
				for(int d=0;d<2;d++){
					for(int e=0;e<2;e++){
					if(((a&&b+c+d+e==3)||(a==0&&b+c+d+e!=3))&&((b&&a+c+d+e==0)||(b==0&&a+c+d+e))&&((c&&a+b+d+e==1)||(c==0&&a+b+d+e!=1))&&((d&&a+b+c+e==4)||(d==0&&a+b+c+e!=4)))
					printf("A %s\nB %s\nC %s\nD %s\nE %s\n",a?"°×Ö½":"ºÚÖ½",b?"°×Ö½":"ºÚÖ½",c?"°×Ö½":"ºÚÖ½",d?"°×Ö½":"ºÚÖ½",e?"°×Ö½":"ºÚÖ½")	;
					}
				}
			}
		}
	}
	return 0;
}
