# include <stdio.h>
# include <string.h>

//�Լ�дһ��strlen������
int  mystrlen(char *s){  //������ָ������Ϊ����Ҳ��һ��ָ�룬����ָ�����Ͱ����ķ�Χ���� 
	int count=0;
	while(s[count]!='\0') {
		count++;
	}
	return count;
} 

int main(){
	char line[]="Hello"; 
	printf("%d ",strlen(line));  //ͳ���ַ������ȵ�ʱ�����ַ���������'\0' 
	printf("%d ",sizeof(line));  //�������ַ��������С��ʱ��������'\0'Ҳ�������� 
	printf("%d",mystrlen(line));
	return 0;
}
