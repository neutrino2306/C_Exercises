# include <stdio.h>
int main(){
	const int size=3;
	int a[size][size];
	int numofxh,numofoh,numofxl,numofol;
	int result=-1;
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			scanf("%d",&a[i][j]);   //����һ��ѭ�����������ȡ���룬�������ʼ�� 
		}
	} 
    for(int c=0;c<size;c++){
    	numofxh=numofol=numofoh=numofxl=0;
    	for(int b=0;b<size;b++){
    		if(a[c][b]){
    		 numofxh++;
			}
			else{
			 numofoh++;
			}
			if(a[b][c]){
			 numofxl++;
			}
			else{
			 numofol++;
			}
		}
		if(numofxh==size||numofxl==size){
			result=1;
		}
		else if(numofoh==size||numofol==size){
			result=0;
		}
	}
	numofxh=numofoh=numofxl=numofol=0;
	for(int p=0;p<size;p++){
	  if(a[p][p]){
	  	numofxh++;
	  }
	  else numofoh++;
	  if(a[p][size-p-1]){
	  	numofxl++;
	  }
	  else numofol++;
	}
	if(numofxh==size||numofxl==size){
	  	result=1;
	  }
	  else if(numofoh==size||numofol==size){
	  	result=0;
	  }
	  if(result==1){
	  	printf("1Ӯ��"); 
	  }
	  else if(result==0){
	  	printf("0Ӯ��");
	  }
	  else printf("ƽ��"); 
	return 0;
}
