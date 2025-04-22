/*   这是自己写的，用了函数 
# include <stdio.h>
int a(double a,double b);
int b(double o,double h,double l,double c);
int main(){
	double o,h,l,c;
	scanf("%lf %lf %lf %lf",&o,&h,&l,&c);
	if(a(o,c)==1){
	   if(b(o,h,l,c)==0){	
	   printf("BW-Solid");
	   }
	   else if(b(o,h,l,c)==4){
	   printf("BW-Solid with Lower Shadow and Upper Shadow");
	   }
	   else if(b(o,h,l,c)==5){
	   	printf("BW-Solid with Upper Shadow");
	   }
	   else printf("BW-Solid with Lower Shadow");
	}
	else if(a(o,c)==2){
	   if(b(o,h,l,c)==0){	
	   printf("R-Hollow");
	   }
	   else if(b(o,h,l,c)==4){
	   	printf("R-Hollow with Lower Shadow and Upper Shadow");
	   }
	   else if(b(o,h,l,c)==5){
	   	printf("R-Hollow with Upper Shadow");
	   }
	   else printf("R-Hollow with Lower Shadow");
	}	
	else if(a(o,c)==3){
		if(b(o,h,l,c)==0){	
	   printf("R-Cross");
	   }
	   else if(b(o,h,l,c)==4){
	   	printf("R-Cross with Lower Shadow and Upper Shadow");
	   }
	   else if(b(o,h,l,c)==5){
	   	printf("R-Cross with Upper Shadow");
	   }
	   else printf("R-Cross with Lower Shadow");
	}	
	return 0;
}
int a(double o,double c){
	int a;
	if(o>c){
		a=1;
	}
	else if(o==c){
		a=2;
	}
	else a=3;
	return a;
}
int b(double o,double h,double l,double c){
	int b;
	if((h>o&&h>c)&&(l<o&&l<c)){
		b=4;
	}
	else if((h>o&&h>c)&&(l>=o||l>=c)){
		b=5;
	}
	else if((h<=o||h<=c)&&(l<o&&l<c)){
		b=6;
	}
	else b=0;
    return b;
}
*/
#include<stdio.h>
int main()
{
    double open,close,high,low;
    scanf("%lf %lf %lf %lf",&open,&high,&low,&close);
    if(close<open)
        printf("BW-Solid");
    else if(close>open)
        printf("R-Hollow");
    else
        printf("R-Cross");
    if((low<open&&low<close)&&(high>open&&high>close))
        printf(" with Lower Shadow and Upper Shadow");
    else if(low<open&&low<close)
        printf(" with Lower Shadow");
    else if(high>open&&high>close)
        printf(" with Upper Shadow");
   return 0;
}




