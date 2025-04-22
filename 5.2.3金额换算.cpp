# include <stdio.h> 
int main(){
	
	int x;
	int a,b,c;
	int exit=0;
	printf("请输入金额（元）："); 
	scanf("%d",&x);
/*	for(c=1;c<(x*10);c++){
		for(b=1;b<(x*10/2);b++){
			for(a=1;a<(x*10/5);a++){
				if(c*1+b*2+a*5==x*10){
					printf("%d个1角加%d个2角加%d个5角等于%d元\n",c,b,a,x);
					exit=1;
					break;  break只能跳出一重循环，要想跳出所有循环，就要另设变量，使其在触发break条件发生时改变值 
				}
			
			}
				if(exit==1) break;  然后依次在其他循环中使用if语句，将变量改变值作为跳出循环的判断条件 
		}
			if(exit==1) break;
	} */
	for(c=1;c<(x*10);c++){
		for(b=1;b<(x*10/2);b++){
			for(a=1;a<(x*10/5);a++){
				if(c*1+b*2+a*5==x*10){
					printf("%d个1角加%d个2角加%d个5角等于%d元\n",c,b,a,x);
					exit=1;
					goto out;//使用goto语句，直接跳到 out所在的地方，从而实现跳出多重循环 
				}
			
			}
		}
	} 
	out;
	return 0;
}
