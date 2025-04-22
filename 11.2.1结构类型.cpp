# include <stdio.h>

struct date{
	int month;
	int day;
	int year;
}; 

int main(){
	struct date today;
	today=(struct date){11,8,2021	};
	struct date day;
	day=today;
	printf("today is %d-%d-%d\n",today.day,today.month,today.year);
	printf("this day is %d-%d-%d",day.year,day.month,day.day);
	return 0;
} 
