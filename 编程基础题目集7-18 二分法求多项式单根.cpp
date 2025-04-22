# include <stdio.h>  //哈哈  这才是最精简的版本 

double f(double x,double a,double b, double c,double d);
int main (){
	double p,q,s,t,a,b;
	scanf("%lf %lf %lf %lf %lf %lf",&p,&q,&s,&t,&a,&b);
    for(double i=(a+b)/2;(b-a)>=0.001;i=(a+b)/2){
     if(f(a,p,q,s,t)==0||f(b,p,q,s,t)==0){
     	printf("%.2f",f(a,p,q,s,t)==0?a:b);
     	return 0;
	 }
	 else if(f(i,p,q,s,t)==0){
	 	printf("%.2f",i);
     	return 0;
	 }
     else if(f(i,p,q,s,t)*f(b,p,q,s,t)>0){
     	b=(a+b)/2;
	 }
     else if(f(i,p,q,s,t)*f(a,p,q,s,t)>0){
     	a=(a+b)/2;
	 }
	}
	if(b-a<0.001) printf("%.2f",(a+b)/2);
	return 0;
} 

double f(double x,double a,double b, double c,double d){
	double t;
	t=a*x*x*x+b*x*x+c*x+d;
	return t;
}

/*# include <stdio.h>  嘿嘿，这才是我自己写的满分版本 

double f(double x,double a,double b, double c,double d);
int main (){
	double p,q,s,t,a,b;
	scanf("%lf %lf %lf %lf %lf %lf",&p,&q,&s,&t,&a,&b);
	double i=(a+b)/2;
    while((b-a)>=0.001){
     if(f(a,p,q,s,t)==0||f(b,p,q,s,t)==0){
     	printf("%.2f",f(a,p,q,s,t)==0?a:b);
     	return 0;
	 }
	 else if(f(i,p,q,s,t)==0){
	 	printf("%.2f",i);
     	return 0;
	 }
     else if(f(i,p,q,s,t)*f(b,p,q,s,t)>0){
     	b=(a+b)/2;
	 }
     else if(f(i,p,q,s,t)*f(a,p,q,s,t)>0){
     	a=(a+b)/2;
	 }
	 i=(a+b)/2;
	}
	if(b-a<0.001) printf("%.2f",i);
	return 0;
} 

double f(double x,double a,double b, double c,double d){
	double t;
	t=a*x*x*x+b*x*x+c*x+d;
	return t;
}
*/


/*   18分的版本 
# include <stdio.h>

double f(double x,double a,double b, double c,double d);
int main (){
	double p,q,s,t,a,b,c;
	scanf("%lf %lf %lf %lf %lf %lf",&p,&q,&s,&t,&a,&b);
	c=(a+b)/2;
	if(f(a,p,q,s,t)==0||f(b,p,q,s,t)==0){
		 printf("%.2f",f(a,p,q,s,t)==0?a:b);
	}
	else if(f(a,p,q,s,t)*f(b,p,q,s,t)<0) {
		double i=(a+b)/2;
	 while(f(a,p,q,s,t)*f(b,p,q,s,t)<0){
	 	if (f(i,p,q,s,t)==0) {
	 		printf("%.2f",i);
	 		break;
		 }
	 	else if (f(i,p,q,s,t)*f(a,p,q,s,t)>0){
	 	   a=(a+b)/2;
		 }
		else if (f(i,p,q,s,t)*f(b,p,q,s,t)>0){
		   b=(a+b)/2;
		}
		i=(a+b)/2;
	 }
	}

	return 0;
} 

double f(double x,double a,double b, double c,double d){
	double t;
	t=a*x*x*x+b*x*x+c*x+d;
	return t;
} */

/* 20 分的版本  借鉴了一下网上的 
# include <stdio.h>

double f(double x,double a,double b, double c,double d);
int main (){
	double p,q,s,t,a,b,c=0;
	scanf("%lf %lf %lf %lf %lf %lf",&p,&q,&s,&t,&a,&b);
    while((b-a)>=0.001){
     if(f(a,p,q,s,t)==0||f(b,p,q,s,t)==0){
     	c=f(a,p,q,s,t)==0?a:b;
     	break;
	 }
	 else if(f((a+b)/2,p,q,s,t)==0){
	 	c=(a+b)/2;
	 	break;
	 }
     else if(f((a+b)/2,p,q,s,t)*f(b,p,q,s,t)>0){
     	b=(a+b)/2;
	 }
     else if(f((a+b)/2,p,q,s,t)*f(a,p,q,s,t)>0){
     	a=(a+b)/2;
	 }
	}
	if(b-a<0.001){
   c=(a+b)/2; 
}
	printf("%.2f",c);
	return 0;
} 

double f(double x,double a,double b, double c,double d){
	double t;
	t=a*x*x*x+b*x*x+c*x+d;
	return t;
}

*/ 
