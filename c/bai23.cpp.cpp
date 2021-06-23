#include "stdio.h"
int so_ngay_cua_thang(int thang, int nam){
	switch(thang){
		case 1:
		case 3: 
		case 5:
		case 7:
		case 8: 
		case 10:
		case 12:
			return 31;
		case 4:
		case 6: 
		case 9:
		case 11: 
			return 30;
		case 2:
			return((nam%400==0) || (nam%4==0 && nam%100 !=0 ))?29:28;
		default:
			return -1;		
	}
}
int tat_ca_ngay_trong_nam_do(int ngay, int thang, int nam){
	int ngay_trong_nam = 0;
		for(int i = 1; i<thang; i++){
	ngay_trong_nam+=so_ngay_cua_thang(i, nam);
	}
		ngay_trong_nam+= ngay;
			return ngay_trong_nam;
}

void NGAY_TRUOC_DO(int ngay, int thang, int nam){
	if(ngay==1){
		if(thang==1){
			ngay = 31;
			nam--;
		}else{
			thang--;
			ngay=so_ngay_cua_thang(thang, nam);
		}
	}else{
		ngay--;
	}
	printf("\nNgay truoc do la : %d/%d/%d",ngay, thang, nam);
}

void NGAY_KE_DO(int ngay, int thang, int nam){
	int NGAY_CUA_THANG = so_ngay_cua_thang(thang, nam);
	if(ngay==NGAY_CUA_THANG){
		if(thang==12){
			ngay = 1;
			nam++;
		}else{
			ngay = 1;
			nam++;
		}
	}else{
		ngay++;
	}
	printf("\nNgay ke do la : %d/%d/%d",ngay, thang, nam);
}

int main(){
	int ngay,thang,nam;
	do{
	printf("nhap so ngay");
	scanf("%d", &ngay);
		printf("nhap so thang");
			scanf("%d", &thang);
				printf("nhap so nam");
					scanf("%d", &nam);
	}while(ngay<1 || ngay>31 || thang<1 || thang>12 || nam<1 );
	//tim ra so ngay trong thang
		printf("\nso ngay cua thang: %d", so_ngay_cua_thang(thang, nam));
	//tim ra ngay trong nam
		printf("\nso ngay trong nam: %d", tat_ca_ngay_trong_nam_do(ngay, thang, nam));
	//tim ra ngay truoc do
		NGAY_TRUOC_DO(ngay, thang, nam);
	//Ngay ke do
		NGAY_KE_DO(ngay, thang, nam);
	
}
