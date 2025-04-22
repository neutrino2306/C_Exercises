#include <stdio.h>

int chess[8][8]={0};
int f(int *x,int *y,int c){
	switch(c){
		case 0:
			if(*x+2<=7&&*y-1>=0&&chess[*x+2][*y-1]==0){
				*x+=2;
				*y-=1;
				return 1;
			}
			break;
		case 1:
			if(*x+2<=7&&*y+1<=7&&chess[*x+2][*y+1]==0){
				*x+=2;
				*y+=1;
				return 1;
			}
			break;
		case 2:
			if(*x+1<=7&&*y-2>=0&&chess[*x+1][*y-2]==0){
				*x+=1;
				*y-=2;
				return 1;
			}
			break;
		case 3:
			if(*x+1<=7&&*y+2<=7&&chess[*x+1][*y+2]==0){
				*x+=1;
				*y+=2;
				return 1;
			}
			break;
		case 4:
			if(*x-1>=0&&*y-2>=0&&chess[*x-1][*y-2]==0){
				*x-=1;
				*y-=2;
				return 1;
			}
			break;
		case 5:
			if(*x-1>=0&&*y+2<=7&&chess[*x-1][*y+2]==0){
				*x-=1;
				*y+=2;
				return 1;
			}
			break;
		case 6:
			if(*x-2>=0&&*y-1>=0&&chess[*x-2][*y-1]==0){
				*x-=2;
				*y-=1;
				return 1;
			}
			break;
		case 7:
			if(*x-2>=0&&*y+1<=7&&chess[*x-2][*y+1]==0){
				*x-=2;
				*y+=1;
				return 1;
			}
			break;
		default:
            break;	
	}
	return 0;
}

int tcb(int x,int y,int t){
	int a=x,b=y,flag=0,count=0;
	chess[a][b]=t;
	if(t==64){
		return 1;
	}
	k:
	while(!flag&&count<8){
		flag=f(&a,&b,count);
		count++;
	}
	while(flag){
		if(tcb(a,b,t+1)) return 1;
		else{
			a=x;
			b=y;
			count++;
			flag=f(&a,&b,count);
			goto k;
//			while(!flag&&count<8){
//	        	flag=f(&a,&b,count);
//		        count++;
//	        }
		}
     }
	if(!flag){
		chess[x][y]=0;
		return 0;
	}
}

int main(){
	if(tcb(2,0,1)){
		for(int i=0;i<8;i++){
			for(int j=0;j<8;j++){
				printf("%3d",chess[i][j]);
				if(j<7) printf(" ");
				else printf("\n"); 
			}
		}
		printf("the horse has travelled the chess board");
	}
	else printf("the horse cannot travel the chess board");
	return 0;
}
