# include <stdio.h>
/*    总体思路：让新的数除以已知的素数，若能整除，则非素数，否则就是素数 
int isprime(int x,int knownprimes[],int numberofknowprimes); 
int main(){
	const int number = 10;
	int prime[number]={2};
	int count = 1;  //计数君   一开始素数集里的素数只有2  所以count是1 
	int i = 3;
	while(count<number){
		if(isprime(i,prime,count)){
			prime[count++]=i;    //这里特别巧妙，先用了count的原值，再令count加1 
		}
		{ 
		   printf("i=%d \t count=%d\t",i,count);
		   {
		   	for( int i=0;i<number;i++){
		   		printf("%d\t",prime[i]);
			   }
			   printf("\n");
			} 
		} 
		i++;
	}
	for(int j=0;j<number;j++){
		printf("%d",prime[j]);
		if((j+1)%5) printf("\t");  //换行处理，注意i是从0开始的，而计数的话应该是从1开始 
		else printf("\n");
	}
	return 0;
}
int isprime(int x,int knownprimes[],int numberofknownprimes){
	int ret = 1;  //用于判断的一个数 
	int i;
	for(i=0;i<numberofknownprimes;i++){   //思路：把新数字除以已知的素数，若能整除，则说明新数字并非素数 
		if(x%knownprimes[i]==0);{        //这里的numberofknowprimes是为了遍历数组的元素  使数组里每个已知素数都能被x除一遍 
		ret=0;                            //i=0是因为数组的第一个元素是prime[0]
		break;
		}
	}
	return ret;
}
*/

//这是我自己写的（好吧算是抄着写的） 
int main(){
int f(int k,int a[],int c);
const int number=10;
int prime[number]={2};
int count=1;
int i=3;

while(count<number){
  if(f(i,prime,count)){
  	prime[count]=i;
  	count++;
  }
  {
  	printf("i=%d count=%d\t",i,count);
  	for(int a=0;a<number;a++){
  		printf("%d\t",prime[a]);
	  }
	  printf("\n");
  }
  i++;	
}
for(int j=0;j<number;j++){
	printf("%d",prime[j]);
	if((j+1)%5==0){
	printf("\n"); 
	} 
	else  printf("\t");
}
return 0;
}

int f(int k,int a[],int c){
	int ret=1;
	for(int t=0;t<c;t++){
		if(k%a[t]==0){
			ret=0;
			break;
		}
	}
	return ret;
}
