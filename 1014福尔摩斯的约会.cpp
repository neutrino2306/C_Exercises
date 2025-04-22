#include <stdio.h>

int main(){
	char a[61],b[61],c[61],d[61];
	char day[7][4]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
	scanf("%s%s%s%s",a,b,c,d);
	int c1=0,time,h;
	for(int i=0;i<61;i++){
	  if(a[i]==b[i]&&c1==0&&a[i]>64&&a[i]<75){
	  	c1++;
	  	printf("%s ",day[a[i]-65]);
	  }
	  else if(a[i]==b[i]&&c1==1&&((a[i]>64&&a[i]<79)||(a[i]>47&&a[i]<58))){
	  	if(a[i]<65){
	  		printf("0%c:",a[i]);
		  }
		else{
			printf("%d:",a[i]-65+10);
		}
	  	break;
	  }
	}
	for(int i=0;i<60;i++){
	 if(c[i]==d[i]&&((c[i]>96&&c[i]<122)||(c[i]>64&&c[i]<91))){
	  	if(i<10) printf("0%d",i);
	  	else     printf("%d",i);
	  	break;
	  }	
	}

	return 0;
}

