# include <stdio.h>
int main(){
	int x,a,i=1,b=1;
	printf("请输入一个数："); 
	scanf("%d",&x); 
	/*这一段蓝色的是在第三行中i=2时为能使输入2时显示2为素数的专门的if语句，
	但实际上只要在第19行的while（）中加 条件i>1&&a==0即可省略这一段if语句 
	if(x==2){
	 	printf("这个数是素数\n");
	} 
	else{*/
/*  这是用 do-while语句写的判断程序，但实际上不如下方for语句简洁 
    在使用这一段的时候，记得把开头b的定义改成0 
  do{
    	a=x%i;
   if(i>1&&a==0){
   	b++;
   }
   	i++;
	}while(i<=(x/2));
   if(b==0)
   	printf("这个数是素数\n");
   else printf("这个数不是素数\n");
	return 0;
}      */
 /*  这是用for语句写的程序，同时运用了break，使在输入非素数的时候更简便 
  for(i=1;i<=(x/2);i++){
      if(i>1&&x%i==0){
      	printf("这个数不是素数\n");
      	break;
	  }
	}
	if(b==1){ 
	printf("这个数是素数\n");
	} 
	return 0;
	*/
	/* 老师的版本
	for(i=2;i<(x2);i++);{
	if(x%1==0){
	b=0;
	break;
}
}
if(b=1) printf("是素数")；
else printf("不是素数")；	*/
	for(i=1;i<=(x/2);i++){
		 if(i>1&&x%i==0){
      	continue;
	  }
	  else b++;
	}
	if(b<=(x/2)){ //注意这里判断条件是b<=，如果只是<，4就会被判断为素数 
	printf("这个数不是素数\n");
	} 
	else {
	printf("这个数是素数\n");
	}
	//上面这个使用的是for语句和continue，通过计算非因数的个数
	//并与n/2比较，从而判断是否为素数，与第一个for语句的思考角度不同 
	return 0;
 } 
    
