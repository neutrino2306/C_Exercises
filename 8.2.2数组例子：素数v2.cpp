//   ��һ���˼·�ǣ�
//   1����xΪ2
//   2����2x��3x��4x��ֱ��ax<n�������Ϊ������
//   3����xΪ��һ��û�б����Ϊ�������������ظ�����2��ֱ�����е������Ѿ�������� 
//     α�������£�
//	 1.����prime[n],��ʼ��������Ԫ��Ϊ1,prime[x]==1��ʾxΪ����
//	 2.��x=2
//	 3.��xΪ����,�����(i=2;x*i<n;i++),��prime[i*x]=0
//	 4.��x++,��x<n,�ظ�����3,�������
# include <stdio.h>
int main(){
	int n=25;
	int prime[n]; 
	for(int i=0;i<n;i++){
		prime[i]=1;
	}
	for(int x=2;x<n;x++){
		if(prime[x]){
		
	  for(int j=2;j*x<n;j++){
	  	prime[j*x]=0;
	  }
	  }
	}
	for(int t=2;t<n;t++){
		if(prime[t]){
			printf("%d\t",t);
		}
	}

	return 0;
}
                
