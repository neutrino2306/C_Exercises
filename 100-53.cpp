#include <stdio.h>

int main(){
	for(int a=0;a<2;a++){
		for(int b=0;b<2;b++){
			for(int c=0;c<2;c++){
				if(((a&&a+b+c==2)||(!a&&a+b+c!=2))&&((b&&a+b+c==1)||(!b&&a+b+c!=1))&&((c&&a+b+c==1)||(!c&&a+c+b!=1)))
				printf("A %s \n B %s \n  C %s \n",a?"��ʵ":"˵��",b?"��ʵ":"˵��",c?"��ʵ":"˵��");
			}
		}
	}
	return 0;
}
