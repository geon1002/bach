#include "stdio.h"

struct Date{
	int day;
	int month;
	int year; 
};

void INPUT_DATE(struct Date &d){
	printf("NHap ngay: ");
	scanf("%d", &d.day);
	printf("NHap thang: ");
	scanf("%d", &d.month);
	printf("NHap nam: ");
	scanf("%d", &d.year);
}

void PRINTF_DATE(struct Date d){
	printf("%d/%d/%d", d.day, d.month, d.year);
}


int CHECK_DATE(struct Date d){
	if(d.day<0 || d.month<0 || d.year<0)
		return 0;
	if(d.month>12)
		return 0;
	if(d.month==2){
		if(d.day>28)
			return 0;
	}
	if (d.month==1|| d.month==3 || d.month==5|| d.month==7|| d.month==8|| d.month==10|| d.month==12){
		if(d.day>31)
			return 0;
	}
	
	if(d.day>30)
		return 0;
		
	return 1;
	
}

int main(){
	struct Date MY_DATE;
	INPUT_DATE(MY_DATE);
	printf("\n---\n");
	PRINTF_DATE(MY_DATE);
	printf("\nKiem tra hop le: %s", CHECK_DATE(MY_DATE)==1?"Hop le":"Khong hop le");
}




