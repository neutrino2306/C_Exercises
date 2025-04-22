#include <stdio.h>

int main(){
	for(int i=0,l[4]={0};i<4;i++){
		l[i]=1;
		if(l[1]+l[3]==1&&l[1]+l[2]==1&&l[0]+l[1]==1){
			printf("%d",i+1);
			break;
		}
		else l[i]=0;
	}
	return 0;
}

/*
#include <stdio.h>

int main(){
	for(int a=0;a<2;a++){
		for(int b=0;b<2;b++){
			for(int c=0;c<2;c++){
				for(int d=0;d<2;d++){
					for(int as=0;as<2;as++){
						for(int bs=0;bs<2;bs++){
							for(int cs=0;cs<2;cs++){
								for(int ds=0;ds<2;ds++){
									if(((a&&bs+ds==1)||(a==0&&bs+ds==1))&&((b&&bs+cs==1)||(b==0&&bs+cs==1))&&((c&&bs+as==1)||(c==0&&bs+as==1))){
										if(as&&bs+cs+ds==0) printf("¼×");
										if(bs&&as+cs+ds==0) printf("ÒÒ");
										 if(cs&&bs+as+ds==0) printf("±û");
										 if(ds&&bs+cs+as==0) printf("¶¡");
										 goto end;
									}
									
								}
							}
						}
					}
				}
			}
		}
	}
	end:
	return 0;
}

*/
