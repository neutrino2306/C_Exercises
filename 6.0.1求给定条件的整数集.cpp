# include <stdio.h> 
int main(){
	int n,a,count=0; 
	printf("������n��ֵ��ע��n������6����");
    scanf("%d",&n);
	for(int i=n;i<n+4;i++){
		for(int j=n;j<n+4;j++){
			for(int k=n;k<n+4;k++){
			a=100*i+10*j+k; 
			if(i==j or j==k or i==k) continue;
			count++;
			if(count%6==0){
			printf("%d\n",a);
			}
			else{
				printf("%d ",a);
			}
		}
	} 
    }
 /* ������δ�������while���д�ģ�����Ȼ��û��for����ݣ���������д�ǳ��������״� 
    int i,j,k;
	i=n;
    while(i<n+4){
    	j=n;
    	while(j<n+4){
    		k=n;
    		while(k<n+4){
			if(i!=j&&j!=k&&i!=k){
				printf("%d%d%d",i,j,k);
				count++;
				if(count%6==0){
					printf("\n");
				}
				else{
					printf(" ");
				}
			}k++;
			}
    		j++;
			}
    		i++;
		}  */
    return 0; 
} 
