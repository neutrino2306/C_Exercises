# include <stdio.h>
int main(){
	int x,y,t;
	printf("«Î ‰»Îx:\n");
	scanf("%d",&x);
	t=(x<1)?1:(x>1&&x<10)?2:(x>10&&x<15)?3:4;
	switch(t){
		case 1:
			printf("y=2*x");
			break;
        case 2:
        	printf("y=1+x");
        	break;
        case 3:
            printf("y=2*3*x");
            break;
        case 4:
        printf("y=4*x");
        
        default:
        	printf("none");
        	break;
	}
	return 0;
}
