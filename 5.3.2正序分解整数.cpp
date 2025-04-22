# include <stdio.h> 
int main(){
    
    int n,t,mask=1,s=0;
    printf("请输入n的值：");
    scanf("%d",&n);
    t=n; 
 /*  这一段是通过先把n的值先倒过来，然后再逆向输出的方法做正序分解
     但对于700这样的数输出只能为7，并不是全部适用 因而有了下方的程序 
    do{
		s=s*10+n%10;
    	n/=10;
    	
	}while(n>0); 
	do{ int a=0;
		a=s%10;
		if(s>9){printf("%d ",a);
		}
		else printf("%d\n",a);//前面都输出空格，控制最后一位后不输出空格 
		s/=10;
	}while(s>0);  */
	
	
/*	
第二种算法：
    int a=0;
	do{
		n/=10;
		a++;
		mask=mask*10;
	} while(n>0);
	printf("a=%d\n",a);
  根据位数算出mask值，但实际上有更简便的算法，如上方的程序，直接将位数统计和mask一起运算了 
	mask=1;
	while(a>1){
		mask=mask*10;
		a--; 
	}
	printf("mask=%d",mask);
	mask/=10; 会发现mask的位数比n的位数多一个，那么除以10就可以了*/
	// 或者还有一种方法 
	while(n>9){
		n/=10;
		mask*=10;
	} //但是这样算位数计算a就会少1，所以这里不做位数统计 
	do{ 
		s=t/mask;
		printf("%d",s);
		if(mask>9){
			printf(" ");
		}
		
		t%=mask;
		mask/=10;
	}while(mask>0);
	printf("\n");
    return 0; 
} 
