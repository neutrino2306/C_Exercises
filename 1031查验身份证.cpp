#include <stdio.h>
int main(){
	int n,c=0,sum,flag=0;
	scanf("%d",&n);
	char s[n][19];
	int q[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2}; 
	char m[11]={'1','0','X','9','8','7','6','5','4','3','2'};
	for(int i=0;i<n;i++){
	   scanf("%s",s[i]);
    }
    for(int i=0;i<n;i++){
		sum=0;
		flag=0;
		for(int j=0;j<17;j++){
			if(s[i][j]=='X'){
			flag=1;
			break;	 
			}
			else {
			  sum+=(s[i][j]-48)*q[j];
			}
		}
		if(m[sum%11]!=s[i][17]||flag){
			c++;
	     	printf("%s\n",s[i]);
		}
	}
	if(!c) printf("All passed");
	return 0;
} 

/*还有一个是大佬帮我改的版本  更精简

想问一下这个代码哪里错了，输出字符串的时候所有的元素都一起输出了……

#include <stdio.h>
int main(){
    int n,c=0,sum,flag=0;
    scanf("%d",&n);
    char s[n][18];
    int q[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2}; 
    char m[11]={'1','0','X','9','8','7','6','5','4','3','2'};
    for(int i=0;i<n;i++){
       scanf("%s",s[i]);
    }
    for(int i=0;i<n;i++){
        sum=0;
        flag=0;
        for(int j=0;j<17;j++){
            if(s[i][j]=='X'){
            flag=1;
            break;     
            }
            else {
              sum+=(s[i][j]-48)*q[j];
            }
        }
        if(m[sum%11]!=s[i][17]||flag){
            c++;
             printf("%s\n",s[i]);
        }
    }
    if(!c) printf("All passed");
    return 0;
} 

*/ 
