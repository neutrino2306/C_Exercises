# include <stdio.h>
int main(){
	int count1=0,count2=0;
	char c;
	do{
		scanf("%c",&c);
		if(c!=' '&&c!='\n'&&c!='.'){ //这里要注意，在判断条件里还是写了 c!='.' 是因为如果输入的是.，由于while在后面，所以count1还是会加1                   
			count1++;                 //而影响后面的输出   否则空句子（只有一个句号）都会认为有一个单词   而结尾也会有问题 
		}
		else if(c==' '||c=='\n'){
			if(count1!=0&&count2==0){
				printf("%d",count1);   //如果只有一个单词  就是这种情况 
				count2++;
			}
			else if(count1!=0&&count2!=0){
				printf(" %d",count1);   //如果单词数大于1 就这么输出 
			}
			count1=0;                   //重新输入新单词时  当然要把count1归零 
		}
	}while(c!='.');
			if(count1!=0&&count2<1) printf("%d",count1);       //这个是只有一个单词的一句话 
		else if(count1!=0&&count2>=1) printf(" %d",count1);   //这个是多个单词的句子结尾 
	return 0;
}
