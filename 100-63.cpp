#include <stdio.h>
char op[5]={'#','+','-','*','/'};
float f(float x,float y,int op){
	switch(op){
		case 1:return x+y;
		case 2:return x-y;
		case 3:return x*y;
		case 4:return x/y;
	}
}

float f1(float a,float b,float c,float d,int i,int j,int k){
	float p=f(a,b,i);
	float q=f(p,c,j);
	float s=f(q,d,k);
	return s;
}

float f2(float a,float b,float c,float d,int i,int j,int k){
	float p=f(b,c,j);
	float q=f(p,d,k);
	float s=f(a,q,i);
	return s;
}

float f3(float a,float b,float c,float d,int i,int j,int k){
	float p=f(b,c,j);
	float q=f(a,p,i);
	float s=f(q,d,k);
	return s;
}

float f4(float a,float b,float c,float d,int i,int j,int k){
	float p=f(c,d,k);
	float q=f(b,p,j);
	float s=f(a,q,i);
	return s;
}

float f5(float a,float b,float c,float d,int i,int j,int k){
	float p=f(a,b,i);
	float q=f(c,d,k);
	float s=f(p,q,j);
	return s;
}
int main(){
	int a,b,c,d,flag=0;
	printf("Please input four intgers \n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	while (a<1||a>10||b<1||b>10||c<1||c>10||d<1|d>10){
		printf("Error input, again!\n");
		scanf("%d%d%d%d",&a,&b,&c,&d);
	}
	for(int i=1;i<5;i++){
		for(int j=1;j<5;j++){
			for(int k=1;k<5;k++){
				if(f1(a,b,c,d,i,j,k)==24){
				   printf("((%d%c%d)%c%d)%c%d=24\n",a,op[i],b,op[j],c,op[k],d);
				   flag=1;	
				}
				if(f3(a,b,c,d,i,j,k)==24){
				   printf("(%d%c(%d%c%d))%c%d=24\n",a,op[i],b,op[j],c,op[k],d);
				   flag=1;	
				}
				if(f4(a,b,c,d,i,j,k)==24){
				   printf("%d%c(%d%c(%d%c%d))=24\n",a,op[i],b,op[j],c,op[k],d);
				   flag=1;	
				}
				if(f2(a,b,c,d,i,j,k)==24){
				   printf("%d%c((%d%c%d)%c%d)=24\n",a,op[i],b,op[j],c,op[k],d);
				   flag=1;	
				}
				if(f5(a,b,c,d,i,j,k)==24){
				   printf("(%d%c%d)%c(%d%c%d)=24\n",a,op[i],b,op[j],c,op[k],d);
				   flag=1;	
				}
			}
		}
	}
	if(!flag) printf("Sorry, the four integers cannot be calculated to get 24.\n");
	return 0;
}



