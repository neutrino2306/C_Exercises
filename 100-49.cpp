#include <stdio.h>

int main(){
	for(int a=0;a<2;a++){
		for(int b=0;b<2;b++){
			for(int c=0;c<2;c++){
				if(((a&&b==0)||(a==0&&b))&&((b&&c==0)||(b==0&&c))&&((c&&a+b==0)||(c==0&&a+b!=0)))
				printf("张三%s\n李四%s\n王五%s\n",a?"说真话":"说谎",b?"说真话":"说谎",c?"说真话":"说谎");
			}
		}
	}
	return 0;
}
