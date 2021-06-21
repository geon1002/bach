#include "stdio.h"
int main(){
	int thang, nam;
	printf("thang = ");
	scanf("%d", &thang);
	printf("nam = ");
	scanf("%d", &nam);
	
	switch(thang){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("CO 31 NGAY ");
			break;
			
		case 4:
		case 6:
		case 9:
		case 11:
			printf("CO 30 NGAY");
			break;
		case 2:
		if ((nam % 4==0 && nam % 100 >0)|| (nam % 400==0)){
			printf("CO 29 NGAY ");
		}else{
			printf("CO 28 NGAY ");
		}
		break;
		default:
			printf("nhap du ieu khong dung, xin vui long nha lai ");
			
	}
	if (( nam % 4==0 && nam % 100 >0)|| ( nam % 400==0)){
			printf("\nCO 356 ngay ");
	}else{
			printf("\nCO 355 NGAY ");
	}	
}
