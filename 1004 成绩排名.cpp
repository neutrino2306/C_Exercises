#include <stdio.h>

typedef struct astudent{
	char name[11];
	char number[11];
	int score;
} student;

int main(){
	int n,max=0,min=0;
	scanf("%d",&n);
	student s[n];
	for(int i=0;i<n;i++){
		scanf("%s %s %d",&s[i].name,&s[i].number,&s[i].score);
		if(s[i].score<s[min].score){
			min=i;
		}
		if(s[i].score>s[max].score){
			max=i;
		}
	}
	printf("%s %s\n",s[max].name,s[max].number);
	printf("%s %s",s[min].name,s[min].number);
	return 0;
}
