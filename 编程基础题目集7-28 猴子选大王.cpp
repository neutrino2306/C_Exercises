/*  ���ǲο��İ汾������ѧ��������������Թ��ڷ�������˼ά�ѶȽϸߣ���Ҫ�ܽ�����ҵ�����
    �������ң���Ϊ����̫������ʵ���ϲ����ܺܿ������ 
# include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int x=n;
	for(int i=0;i<n;i++){
		a[i]=1+i;
	}
	
	for(int k=1;k<=x-3;k++){ 
	 for(int j=0;j<x;j++){
	 	if(a[j]==3){
	 		int t=0;
	 	  for(t=0;t<x;t++){
	 	  	if(a[t]<a[j]){
	 	  		a[t]=a[t]+n-a[j];
			   }
			else if(a[t]>a[j]){
				a[t]=a[t]-a[j];
			}
		   }
		   a[j]=-1000000;
		   n--;
		   break;
		 }
	 }
	} 
	if(x==1){
		printf("%d",x);
	}
	for(int i=0;i<x;i++){
		if(a[i]==2){
			printf("%d",i+1);
		}
	}
	return 0;
}
*/



# include <stdio.h>
  int main(){
  	int n,x,count1=0;
  	scanf("%d",&n);
  	x=n;
  	int count2=n;   //������Ҫ������������һ���ǿ���ѭ��������count2��һ����ͳ��������count1 
  	int a[n];
  	for(int i=0;i<n;i++){
  		a[i]=1;
	  }
	while(count2>1){
  	for(int i=0;i<n;i++){
  		if(a[i]){
  			count1++;  //��ÿһ�������ֿ�����ʵcount1���������ɾ��Զ��׼��� 
  			if(count1==3){   //��ÿһ������3����һ�֣��������ܻ���Ϊ���𲽽�� 
  				a[i]=0;
  				count1=0;
  				count2--;   //ÿ��̭һ���ͼ���һֻ���� ��ֱ��ʣ�����һ�� 
			}
		}
		else continue;   //������֮ǰ��̭�ģ��Թ�ȥ�ͺ��� 
	 }
   } 
	 for(int i=0;i<n;i++){
	 	if(a[i]){
	 		printf("%d",i+1);
		 }
	 }
   	return 0;
  }
  
  
  
  
  
