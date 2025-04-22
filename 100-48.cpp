#include <stdio.h>

int main(){
	char x,y,z;
	for(x='a';x<'d';x++){
		for(y='a';y<'d';y++){
			for(z='a';z<'d';z++){
				if(x!='a'&&x!='c'&&z!='c'&&x!=y&&y!=z&&x!=z){
					printf("x %c\ny %c\nz %c\n",x,y,z);
				}
			}
		}
	}
	return 0;
}
