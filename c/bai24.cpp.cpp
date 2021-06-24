#include "stdio.h"
int giai_thua(int n){
	if (n==0 || n==1)
		return 1;
	else
		return n*giai_thua(n-1);
}


int main(){
	int n, gt;
	do{
		printf("NHAP VAO n(n>=0):");
		scanf("%d", &n);

	}while(n<0);
		gt = giai_thua(n);
	printf("\ngiai thua cau %d la %d", n, gt );
	
}
