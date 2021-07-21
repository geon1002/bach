#include "stdio.h"
#include "stdlib.h"

int main(){
	FILE *f;
	
	//1 tao file
	//2 mo file
	f = fopen("bai_008.txt", "r");
	if(f==NULL){
		printf("\n Loi tao hoac mo file");
	}
	//3 ghi hoac doc
	int n;
	fscanf(f, "%d", &n);
	printf("\n Gia tri cua mang la: %d", n);
	
	//4 dong file
	fclose(f);
	
	return 0;
}

