# include <stdio.h>
int main(){
	int n,i;
	printf("������n��ֵ��"); 
	scanf("%d",&n); 
	int x=1;
	/*��һ�β���i�ݼ��ķ�ʽ����׳� 
	for(i=n;i>0;i--){
		x=x*i;
	} */
	for(i=1;i<=n;i++){
		x=x*i;
	}
	printf("%d!=%d",n,x);
	return 0;
}      


//  n  i  x
/*  5  1  1
    5  2  2
    5  3  6
    5  4  24
    5  5  120
    5  6  120��������ѭ���� 

*/ 
