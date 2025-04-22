/*  这一版是经过借鉴，同时自己也稍作修改的一版  但是过于繁琐 
# include <stdio.h>
# include <math.h>
int main(){
	double a,b,c,d,t,p,q,l[4];
	char c1,c2,c3,o[4]={'+','-','*','/'};
	scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
	l[0]=a;
	l[1]=b;
	l[2]=c;
	l[3]=d;
	for(int i=0;i<4;i++){
	if(l[i]<0){
	  	t=-l[i];
	  	l[i]=(-1)*(int)(t*10+0.5)/10.0;    // 这里是对输入的数进行四舍五入的                             
	  }                                   //  以后的四舍五入算法均可参考这个 
	  else{
	  	t=l[i];
	  	l[i]=(int)(t*10+0.5)/10.0;
	  }
	}
	if(b<0) c1='-';
	else    c1='+';
	if(d<0) c2='-';
	else    c2='+';
	for(int i=0;i<4;i++){
	  switch(o[i]){
	  	case '+':
	  	 p=a+c;
	  	 q=b+d;
	  	  if(q<0) c3='-';
	  	  else    c3='+';
	  	  if(fabs(p-0)<0.05&&fabs(q-0)<0.05)
	  	    printf("(%.1f%c%.1fi) + (%.1f%c%.1fi) = 0.0\n",l[0],c1,fabs(l[1]),l[2],c2,fabs(l[3]));
	  	  else if(fabs(p-0)<0.05&&fabs(q-0)>=0.05)
	  	    printf("(%.1f%c%.1fi) + (%.1f%c%.1fi) = %.1fi\n",l[0],c1,fabs(l[1]),l[2],c2,fabs(l[3]),q);
	  	  else if(fabs(p-0)>=0.05&&fabs(q-0)<0.05)
	  	    printf("(%.1f%c%.1fi) + (%.1f%c%.1fi) = %.1f\n",l[0],c1,fabs(l[1]),l[2],c2,fabs(l[3]),p);
	  	  else
	  	    printf("(%.1f%c%.fi) + (%.1f%c%.1fi) = %.1f%c%.fi\n",l[0],c1,fabs(l[1]),l[2],c2,fabs(l[3]),p,c3,fabs(q));
	  	  break;
	  	case '-':
	  	  p=a-c;
	  	  q=b-d;
	  	  if(q<0) c3='-';
	  	  else    c3='+';
	  	  if(fabs(p-0)<0.05&&fabs(q-0)<0.05)
	  	    printf("(%.1f%c%.1fi) - (%.1f%c%.1fi) = 0.0\n",l[0],c1,fabs(l[1]),l[2],c2,fabs(l[3]));
	  	  else if(fabs(p-0)<0.05&&fabs(q-0)>=0.05)
	  	    printf("(%.1f%c%.1fi) - (%.1f%c%.1fi) = %.1fi\n",l[0],c1,fabs(l[1]),l[2],c2,fabs(l[3]),q);
	  	  else if(fabs(p-0)>=0.05&&fabs(q-0)<0.05)
	  	    printf("(%.1f%c%.1fi) - (%.1f%c%.1fi) = %.1f\n",l[0],c1,fabs(l[1]),l[2],c2,fabs(l[3]),p);
	  	  else
	  	    printf("(%.1f%c%.1fi) - (%.1f%c%.1fi) = %.1f%c%.1fi\n",l[0],c1,fabs(l[1]),l[2],c2,fabs(l[3]),p,c3,fabs(q));
	  	  break;
	  	  case '*':
	  	  p=a*c-b*d;
	  	  q=a*d+b*c;
	  	  if(q<0) c3='-';
	  	  else    c3='+';
	  	  if(fabs(p-0)<0.05&&fabs(q-0)<0.05) 
	  	    printf("(%.1lf%c%.1lfi) * (%.1lf%c%.1lfi) = 0.0\n",l[0],c1,fabs(l[1]),l[2],c2,fabs(l[3]));
	  	  else if(fabs(p-0)<0.05&&fabs(q-0)>=0.05)
	  	    printf("(%.1lf%c%.1lfi) * (%.1lf%c%.1lfi) = %.1lfi\n",l[0],c1,fabs(l[1]),l[2],c2,fabs(l[3]),q);
	  	  else if(fabs(p-0)>=0.05&&fabs(q-0)<0.05)
	  	    printf("(%.1lf%c%.1lfi) * (%.1lf%c%.1lfi) = %.1lf\n",l[0],c1,fabs(l[1]),l[2],c2,fabs(l[3]),p);
	  	  else
	  	    printf("(%.1lf%c%.1lfi) * (%.1lf%c%.1lfi) = %.1f%c%.1lfi\n",l[0],c1,fabs(l[1]),l[2],c2,fabs(l[3]),p,c3,fabs(q));
	  	  break;
	  	  case '/':
	  	  p=(a*c+b*d)/(c*c+d*d);
	  	  q=(b*c-a*d)/(c*c+d*d);
	  	  if(q<0) c3='-';
	  	  else    c3='+';
	  	  if(fabs(p-0)<0.05&&fabs(q-0)<0.05)
	  	    printf("(%.1f%c%.1fi) / (%.1f%c%.1fi) = 0.0\n",l[0],c1,fabs(l[1]),l[2],c2,fabs(l[3]));
	  	  else if(fabs(p-0)<0.05&&fabs(q-0)>=0.05)
	  	    printf("(%.1f%c%.1fi) / (%.1f%c%.1fi) = %.1fi\n",l[0],c1,fabs(l[1]),l[2],c2,fabs(l[3]),q);
	  	  else if(fabs(p-0)>=0.05&&fabs(q-0)<0.05)
	  	    printf("(%.1f%c%.1fi) / (%.1f%c%.1fi) = %.1f\n",l[0],c1,fabs(l[1]),l[2],c2,fabs(l[3]),p);
	  	  else
	  	    printf("(%.1f%c%.1fi) / (%.1f%c%.1fi) = %.1f%c%.1fi\n",l[0],c1,fabs(l[1]),l[2],c2,fabs(l[3]),p,c3,fabs(q));
	  	  break;
	  	  default:
	  	  break;
	  }
	}
	return 0;
}
*/ 

# include <stdio.h>
# include <math.h>
# include <iostream>
using namespace std;
void ch(double p, double q);
int main(){
	double a,b,c,d,t,p,q,l[4];
	char c1,c2,o[4]={'+','-','*','/'};
	scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
	l[0]=a;
	l[1]=b;
	l[2]=c;
	l[3]=d;
	for(int i=0;i<4;i++){
	if(l[i]<0){
	  	t=-l[i];
	  	l[i]=(-1)*(int)(t*10+0.5)/10.0;                               
	  }                                   
	  else{
	  	t=l[i];
	  	l[i]=(int)(t*10+0.5)/10.0;
	  }
	}
	if(b<0) c1='-';
	else    c1='+';
	if(d<0) c2='-';
	else    c2='+';
	for(int i=0;i<4;i++){
	  switch(o[i]){
	  	case '+':
	  	 p=a+c;
	  	 q=b+d;
	  	 printf("(%.1f%c%.1fi) + (%.1f%c%.1fi)",l[0],c1,fabs(l[1]),l[2],c2,fabs(l[3]));
	  	 ch(p,q);
	  	 break;
	  	case '-':
	     p=a-c;
     	 q=b-d;
     	 printf("(%.1f%c%.1fi) - (%.1f%c%.1fi)",l[0],c1,fabs(l[1]),l[2],c2,fabs(l[3]));
     	 ch(p,q);
     	 break;
     	case '*':
	  	 p=a*c-b*d;
	  	 q=a*d+b*c;
	  	 printf("(%.1f%c%.1fi) * (%.1f%c%.1fi)",l[0],c1,fabs(l[1]),l[2],c2,fabs(l[3]));
	  	 ch(p,q);
	  	 break;
        case '/':
	  	 p=(a*c+b*d)/(c*c+d*d);
	  	 q=(b*c-a*d)/(c*c+d*d);
	  	 printf("(%.1f%c%.1fi) / (%.1f%c%.1fi)",l[0],c1,fabs(l[1]),l[2],c2,fabs(l[3]));
	  	 ch(p,q);
	  	 break;
	  }
	return 0;
}

void ch(double p, double q);
	char c3;
	if(q<0) c3='-';
	else    c3='+';
	  if(fabs(p-0)<0.05&&fabs(q-0)<0.05)
	  	printf(" = 0.0\n");
	  else if(fabs(p-0)<0.05&&fabs(q-0)>=0.05)
	  	printf(" = %.1fi\n",q);
	  else if(fabs(p-0)>=0.05&&fabs(q-0)<0.05)
	  	printf(" = %.1f\n",p);
	  else
	  	printf(" = %.1f%c%.1fi\n",p,c3,fabs(q));
	
}






