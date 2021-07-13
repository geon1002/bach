#include "stdio.h"
#include "math.h"
struct phan_so{
	int tu_so; 
	int mau_so;
	
};

void rut_gon(phan_so *ps){
	//Tim UCLN
	int a = ps->tu_so;
	int b = ps->mau_so;
	
	a = abs(a);
	b = abs(b);
	
	int UCLN = 1;
	// TH1
	if(a==0 || b==0){
		UCLN = (a+b);
	}else{
	// TH2
			while(a!=b){
				if(a>b){
					a = a-b;
				}else{
					b = b-a;
				}
			}
			UCLN = a;
	}
	ps->tu_so/=UCLN;
	ps->mau_so/=UCLN;
}

void Nhap_phanso(phan_so *ps){
	printf("\nNHap vao tu so: ");
	scanf("%d", &ps->tu_so);
	do{
		printf("\nNHap vao mau so: ");
		scanf("%d", &ps->mau_so);
	}while(ps->mau_so==0);	
}

void In_phanso(phan_so ps){
	if(ps.mau_so<0){
		ps.tu_so*=-1;
		ps.mau_so*=-1;
	}
	rut_gon(&ps);
	if(ps.mau_so==1){
		printf("%d", ps.tu_so);
	}else{
	printf("%d/%d", ps.tu_so, ps.mau_so);
	}
}

phan_so cong_hai_phan_so(phan_so ps1, phan_so ps2){
	phan_so ket_qua;
	ket_qua.tu_so = ps1.tu_so*ps2.mau_so+ps2.tu_so*ps1.mau_so;
	ket_qua.mau_so = ps1.mau_so*ps2.mau_so;
	return ket_qua;
}

phan_so tru_hai_phan_so(phan_so ps1, phan_so ps2){
	phan_so ket_qua;
	ket_qua.tu_so = ps1.tu_so*ps2.mau_so-ps2.tu_so*ps1.mau_so;
	ket_qua.mau_so = ps1.mau_so*ps2.mau_so;
	return ket_qua;
}

phan_so nhan_hai_phan_so(phan_so ps1, phan_so ps2){
	phan_so ket_qua;
	ket_qua.tu_so = ps1.tu_so*ps2.tu_so;
	ket_qua.mau_so = ps1.mau_so*ps2.mau_so;
	return ket_qua;
}

phan_so chia_hai_phan_so(phan_so ps1, phan_so ps2){
	phan_so ket_qua;
	ket_qua.tu_so = ps1.tu_so*ps2.mau_so;
	ket_qua.mau_so = ps1.mau_so*ps2.tu_so;
	return ket_qua;
}
int main(){
	phan_so ps1, ps2;
	printf("\nPhan so thu nhat: ");
	Nhap_phanso(&ps1);
	printf("\nPhan so thu hai: ");
	Nhap_phanso(&ps2);
	printf("\nPhan so thu nhat vua nhap la: ");
	In_phanso(ps1);
	printf("\nPhan so thu hai vua nhap la: ");
	In_phanso(ps2);
	printf("\nCong hai phan so: ");
	In_phanso(ps1); printf("+"); In_phanso(ps2); printf("="); In_phanso(cong_hai_phan_so(ps1, ps2));
	printf("\nTru hai phan so: ");
	In_phanso(ps1); printf("-"); In_phanso(ps2); printf("="); In_phanso(tru_hai_phan_so(ps1, ps2));
	printf("\nNhan hai phan so: ");
	In_phanso(ps1); printf("*"); In_phanso(ps2); printf("="); In_phanso(nhan_hai_phan_so(ps1, ps2));
	printf("\nNhan hai phan so: ");
	In_phanso(ps1); printf("/"); In_phanso(ps2); printf("="); In_phanso(chia_hai_phan_so(ps1, ps2));
	
}
