
#include "stdio.h"
#include "string.h"
#include "time.h"
#include "conio.h"

struct date{
	int ngay;
	int thang;
	int nam;
};

struct SinhVien{
	int id;
	char ten[50];
	char gioiTinh[5];
	date ngaySinh;
	int tuoi;
	float diemMon1;
	float diemMon2;
	float diemMon3;
	float diemTrungBinh;
	char hocLuc[10];
	char maLop[30];
};
typedef SinhVien SV;



void nhapSinhVien(SV &sv);
void inSinhVien(SV sv);
void tinhTuoi(SV &sv);
void tinhDiemTrungBinh(SV *sv);
void xepLoai(SV &sv);
void capNhatSinhVien(SV &sv);
void nhapDanhSachSinhVien(SV ds[], int &n);
void xuatDanhSachSinhVien(SV ds[], int n);
float timMax_DiemTrungBinh(SV ds[], int n);
int timMin_Tuoi(SV ds[], int n);
void xuatDanhSachSinhVienXepLoai(SV ds[], int n);
void xuatDanhSachSinhVienTheoLop(SV ds[], int n, char lop[]);
int timSinhVienTheoTen(SV ds[], int n, char ten[]);
void xoaSinhVienTheoId(SV ds[], int &n, int id);
void sapXepDanhSachSinhVienTheoDTB(SV ds[], int n);
void sapXepDanhSachSinhVienTheoTen(SV ds[], int n);

void xoaXuongDong(char x[]){
	size_t len = strlen(x);
	if(x[len-1]=='\n'){
		x[len-1]='\0';
	}
}

void nhapSinhVien(SV &sv){
	printf("\nID: "); scanf("%d", &sv.id);
	printf("\nTen: "); fflush(stdin); fgets(sv.ten, sizeof(sv.ten), stdin); xoaXuongDong(sv.ten);
	printf("\nGioi tinh: "); fflush(stdin); fgets(sv.gioiTinh, sizeof(sv.gioiTinh), stdin); xoaXuongDong(sv.gioiTinh);
	printf("\nNgay sinh"); scanf("%d%d%d", &sv.ngaySinh.ngay, &sv.ngaySinh.thang, &sv.ngaySinh.nam);
	printf("\nDiem Mon 1: "); scanf("%f", &sv.diemMon1);
	printf("\nDiem Mon 2: "); scanf("%f", &sv.diemMon2);
	printf("\nDiem Mon 3: "); scanf("%f", &sv.diemMon3);
	printf("\nMa Lop: "); fflush(stdin); fgets(sv.maLop, sizeof(sv.maLop), stdin); xoaXuongDong(sv.maLop);
}

void inSinhVien(SV sv){
	printf("%5d \t %20s \t %10s \t %2d/%d/%d \t %10d \t %6.2f \t %6.2f \t %6.2f \t %6.2f \t %5s \t %10s", sv.id, sv.ten, sv.gioiTinh, sv.ngaySinh.ngay, sv.ngaySinh.thang, sv.ngaySinh.nam, sv.tuoi, sv.diemMon1, sv.diemMon2, sv.diemMon3, sv.diemTrungBinh, sv.hocLuc, sv.maLop);
}

void tinhTuoi(SV &sv){
	time_t TTIME = time(0);
	tm* NOW = localtime(&TTIME);
	int namHienTai = NOW->tm_year+1900;
	sv.tuoi = namHienTai - sv.ngaySinh.nam;
}


void tinhDiemTrungBinh(SV *sv){
	sv->diemTrungBinh = (sv->diemMon1+sv->diemMon2+sv->diemMon3)/3;
}

void xepLoai(SV &sv){
	if(sv.diemTrungBinh>9){
		strcpy(sv.hocLuc, "XUAT SAC");
	}else if(sv.diemTrungBinh>8){
		strcpy(sv.hocLuc, "GIOI");
	}else if(sv.diemTrungBinh>7){
		strcpy(sv.hocLuc, "KHA");
	}else if(sv.diemTrungBinh>5){
		strcpy(sv.hocLuc, "TRUNG BINH");
	}else{
		strcpy(sv.hocLuc, "YEU");
	}
	
}

void capNhatSinhVien(SV &sv){
	nhapSinhVien(sv);
	tinhTuoi(sv);
	tinhDiemTrungBinh(&sv);
	xepLoai(sv);
}

void nhapDanhSachSinhVien(SV ds[], int &n){
	do{
		printf("\nNhap vao n:");
		scanf("%d", &n);
	}while(n<=0);
	for(int i=0; i<n ; i++){
		printf("\nNhap vao sinh vien thu %d: ", i);
		capNhatSinhVien(ds[i]);
	}
}
void xuatDanhSachSinhVien(SV ds[], int n){
		printf("%5s \t %20s \t %10s \t %10s \t %10s \t %6s \t %6s \t %6s \t %6s \t %5s \t %10s", "ID", "Ten", "Gioi Tinh", "Ngay Sinh", "Tuoi", "Diem 1", "Diem 2", "Diem 3", "Diem TB", "XepLoai", "Ma Lop");
		printf("\n");
	for(int i=0; i<n ; i++){
		inSinhVien(ds[i]);
		printf("\n");
	}
}

float timMax_DiemTrungBinh(SV ds[], int n){
	float max = ds[0].diemTrungBinh;
	for(int i=0; i<n; i++){
		if(max< ds[i].diemTrungBinh){
			max = ds[i].diemTrungBinh;
		}
	}
	return max;
}
int timMin_Tuoi(SV ds[], int n){
	int min = ds[0].tuoi;
	for(int i=0; i<n; i++){
		if(min> ds[i].tuoi){
			min = ds[i].tuoi;
		}
	}
	return min;
}

void xuatDanhSachSinhVienXepLoai(SV ds[], int n, char xepLoai[]){
	printf("\n Danh sach sinh vien xep loai gioi");
	printf("%5s \t %20s \t %10s \t %10s \t %10s \t %6s \t %6s \t %6s \t %6s \t %5s \t %10s", "ID", "Ten", "Gioi Tinh", "Ngay Sinh", "Tuoi", "Diem 1", "Diem 2", "Diem 3", "Diem TB", "XepLoai", "Ma Lop");
	printf("\n");
	for(int i=0; i<n ; i++){
		if (strcmp(strupr(ds[i].hocLuc),strupr(xepLoai))==0){
			inSinhVien(ds[i]);
			printf("\n");
		}
	}
}
void xuatDanhSachSinhVienTheoLop(SV ds[], int n, char lop[]){
	printf("\n Danh sach sinh vien thuoc lop %s", lop);
	printf("%5s \t %20s \t %10s \t %10s \t %10s \t %6s \t %6s \t %6s \t %6s \t %5s \t %10s", "ID", "Ten", "Gioi Tinh", "Ngay Sinh", "Tuoi", "Diem 1", "Diem 2", "Diem 3", "Diem TB", "XepLoai", "Ma Lop");
	printf("\n");
	for(int i=0; i<n ; i++){
		if (strcmp(strupr(ds[i].maLop), strupr(lop))){
			inSinhVien(ds[i]);
			printf("\n");
		}
	}
}

int timSinhVienTheoTen(SV ds[], int n, char ten[]){
	// 0 => false
	// 1 => true
	for(int i=0; i<n ; i++){
		if(strstr(strupr(ds[i].ten), strupr(ten))){
			return 1;
		}
	}
	return 0;
}

void xoaSinhVienTheoId(SV ds[], int &n, int id){
	for(int i=0; i<n ; i++){
		if(ds[i].id == id){
			for(int j=i; j<n; j++){
				ds[j] = ds[j+1];
			}
			n-=1;
			return;
		}
	}
}
void sapXepDanhSachSinhVienTheoDTB(SV ds[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(ds[i].diemTrungBinh>ds[j].diemTrungBinh){
				SV temp;
				temp = ds[i];
				ds[i] = ds[j];
				ds[j]=temp;
			}
		}
	}
}
void sapXepDanhSachSinhVienTheoTen(SV ds[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(strcmp(strupr(ds[i].ten), strupr(ds[j].ten))>0){
				SV temp;
				temp = ds[i];
				ds[i] = ds[j];
				ds[j]=temp;
			}
		}
	}
}

void nhapPhimBatKy(){
		printf("\nNhap phim bat ky de tiep tuc!");
        getch();
}
int main(){
	SV ds[100];
	int n;
	int chon;
	do{
		printf("\nMENU:");
		printf("\n1- Nhap danh sach sinh vien");
		printf("\n2- Xuat danh sach sinh vien");
		printf("\n3- Tim max DTB");
		printf("\n4- Tim min Tuoi");
		printf("\n5- Xuat danh sach sinh vien theo lop");
		printf("\n6- Xuat danh sach sinh vien loai");
		printf("\n7- Sap xep sinh vien theo DTB");
		printf("\n8- Sap xep sinh vien theo ten");
		printf("\n9- Tim sinh vien theo ten");
		printf("\n10- Xoa sinh vien theo ID");
		printf("\n0- Thoat");
		scanf("%d", &chon);
		
		switch(chon){
			case 1:
					nhapDanhSachSinhVien(ds, n); 
					nhapPhimBatKy();
					break;
			case 2:
					xuatDanhSachSinhVien(ds, n);
					nhapPhimBatKy();
					break;	
			case 3:
					printf("\n Max DTB = %.2f", timMax_DiemTrungBinh(ds, n));
					nhapPhimBatKy();
					break;
			case 4:
					printf("\n Min Tuoi = %d", timMin_Tuoi(ds, n));
					nhapPhimBatKy();
					break;
			case 5:
					char lop[20];
					printf("\nNhap Ma Lop can hien thi: "); fflush(stdin); fgets(lop, sizeof(lop), stdin); xoaXuongDong(lop); 
					xuatDanhSachSinhVienTheoLop(ds, n,lop);
					nhapPhimBatKy();
					break;
			case 6:
					char xepLoai[20];
					printf("\nNhap xep loai can hien thi: "); fflush(stdin); fgets(xepLoai, sizeof(xepLoai), stdin); xoaXuongDong(xepLoai); 
					xuatDanhSachSinhVienXepLoai(ds, n, xepLoai);
					nhapPhimBatKy();
					break;
					
			case 7:
					printf("\nDanh sach sau khi sap xep theo DTB\n");
					sapXepDanhSachSinhVienTheoTen(ds, n);
					xuatDanhSachSinhVien(ds, n);
					nhapPhimBatKy();
					break;
			case 8:
					printf("\nDanh sach sau khi sap xep theo ten\n");
					xuatDanhSachSinhVien(ds, n);
					xoaSinhVienTheoId(ds, n, 1);
					nhapPhimBatKy();
					break;
			case 9:
					char tensv[20];
					printf("\nNhap ten sinh vien can tim: "); fflush(stdin); fgets(tensv, sizeof(tensv), stdin); xoaXuongDong(tensv); 
					printf("\nKet qua tim sinh vien: %d", timSinhVienTheoTen(ds, n, tensv));
					nhapPhimBatKy();
					break;
			case 10:
					int id;
					printf("\nNhap id can xoa"); scanf("%d", &id);
					printf("\nDanh sach sau khi xoa\n");
					xoaSinhVienTheoId(ds, n, id);
					xuatDanhSachSinhVien(ds, n);
					nhapPhimBatKy();
					break;
		}
	} while(n!=0);
}
