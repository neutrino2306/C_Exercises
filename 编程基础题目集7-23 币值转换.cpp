/* ���ϵĵ�һ���汾 ������û����  ���Խ���Ϊע�� 
#include<stdio.h>
int main()
{
 int n,count = 0,s,k,i,j,b = 0;
 int a[10];
 scanf("%d",&n);
 k = n;
 if(n==0){
  printf("a");
 }
 while(n!=0){
  i = n % 10;
  a[count] = i;
  count++;
  n = n / 10;
 }
// printf("%d\n",count);
 s = count + 1;
 for(j = count-1;j>=0;j--){
  s--;
  if(a[j]==0&&a[j-1]==0&&k>10000&&b==0){
   b++;
   printf("W");
  }
  if(a[j]==0&&a[j-1]==0){
   continue;
  }
  switch(a[j]){
   case 0:printf("a");break;
   case 1:printf("b");break;
   case 2:printf("c");break;
   case 3:printf("d");break;
   case 4:printf("e");break;
   case 5:printf("f");break;
   case 6:printf("g");break;
   case 7:printf("h");break;
   case 8:printf("i");break;
   case 9:printf("j");break;
  } 
  if(a[j]!=0){
   switch(s){
    case 1:break;
    case 2:printf("S");break;
    case 3:printf("B");break;
    case 4:printf("Q");break;
    case 5:printf("W");break;
    case 6:printf("S");break;
    case 7:printf("B");break;
    case 8:printf("Q");break;
    case 9:printf("Y");break;
   } 
  }
 }
 return 0;
}  */

//������������ϵĵڶ����汾����Ȼ��;����˺ܶ� 
/*#include <stdio.h>
int main()
{
    char C[9]={'\n','S','B','Q','W','S','B','Q','Y'};//���������е����ŵ����ֶ�Ӧ��Ӧλ�����  
    int n,N[9];
    scanf("%d",&n);
    if(n==0){printf("a");}
    int index=0;
    while(n)
    {
        N[index++]=n%10;      //����������ʼ�������ǵ��ŵģ���Ȼ����λ���޷�ȷ�������������ܴ��鷳 
        n/=10;               
    }
    int i;
    for(i=index-1;i>=0;i--){
        if(N[i]) printf("%c%c",N[i]+'a',C[i]);//���߷������������ַ�֮��Ķ�Ӧ��ϵ�����ѡ������������Ӧ�����������Switch����,�����˳��� 
        else if(N[4]==0&&i==4){if(N[5]||N[6]||N[7]){printf("W");}}  // ����û�п��������м���������������ֻ������һ�־�����λ������������˲��� 
        else if(N[i]==0&&N[i-1]) {printf("a");}                //��һ�е�  i==4 һ��Ҫ���ϣ���Ȼ��֮ǰҲ����Ķ�������� 
    }
    return 0;
}
*/
//�����Լ���д�İ汾 
# include <stdio.h>
int main(){
	char c[9]={'\n','S','B','Q','W','S','B','Q','Y'};
	int n,b[9],i;
	scanf("%d",&n);
	if(n==0) printf("a");
	for(i=0;n>0;i++){
		b[i]=n%10;
		n/=10;
	} 
	for(int j=i-1;j>=0;j--){
	 if(b[j]){
	 	printf("%c%c",b[j]+'a',c[j]);
	 }
	 else if(j==4&&b[4]==0&&(b[5]||b[6]||b[7])){
	 	printf("W");
	 }
	 else if(b[j]==0&&b[j-1]!=0){
	 	printf("a");
	 }
	}
	return 0;
} 
