# include <stdio.h>

	void printN(int N);
	 
int main(){	

  int N;
  scanf("%d",&N);
  printN(N);
	
	return 0;
}

void printN(int N){
	for(int i=1;i<=N;i++){
		printf("%d\n",i);
	}
}
