# include <stdio.h>
int main(){
	int price=0, bill=0;
	printf("�������\n");
	scanf("%d",&price);
	printf("������Ʊ�棺\n");
	scanf("%d",&bill);
	if(price<=bill){
		printf("Ӧ������%dԪ\n",bill-price);
	}
	else{
		printf("����֧����%dԪ",price-bill);
	 
	}
	return 0;
	
} 
