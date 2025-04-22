# include <stdio.h>
# include <string.h>

//自己写一个strlen函数：
int  mystrlen(char *s){  //这里用指针是因为数组也是一种指针，所以指针类型包含的范围更广 
	int count=0;
	while(s[count]!='\0') {
		count++;
	}
	return count;
} 

int main(){
	char line[]="Hello"; 
	printf("%d ",strlen(line));  //统计字符串长度的时候不算字符数组最后的'\0' 
	printf("%d ",sizeof(line));  //而计算字符串数组大小的时候会把最后的'\0'也计算在内 
	printf("%d",mystrlen(line));
	return 0;
}
