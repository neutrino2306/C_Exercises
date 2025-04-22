# include <stdio.h>
# include <string.h>

// 这是自己写的第一个strcmp函数，这是用遍历数组进行比较 
//int mystrcmp(char *s1,char*s2){
//	int ret=0,count=0;
//	while (s1[count]==s2[count]){
//		count++;
//	}
//	if(s1[count]-s2[count]>0){
//		ret=1;
//	}
//	else if(s1[count]-s2[count]<0){
//		ret=-1;
//	}
//	return ret;
//}
//下面这一版是用指针运算进行比较的 
int mystrcmp(const char*s1,const char* s2){
	int ret=0;
	while(*s1==*s2){
		s1++;
		s2++;
	}
	if(*s1-*s2>0){
		ret=1;
	}
	else if(*s1-*s2<0){
		ret=-1;
	}
	return ret;
} 

int main(){
	char s1[]="abc";
	char s2[]="abc ";
	printf("%d ",strcmp(s1,s2));
	printf("%d",mystrcmp(s1,s2));
	
	return 0;
}
