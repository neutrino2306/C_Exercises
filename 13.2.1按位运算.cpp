# include <stdio.h>

int main(int argc,char *argv[]){
	unsigned int c=0xffffffAA;
	printf(" c=%x\n",c);
	printf("~c=%x\n",~c);
	printf("-c=%x\n",-c);
	return 0;
}
