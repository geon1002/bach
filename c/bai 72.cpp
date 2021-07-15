#include "stdio.h"
#include "stdlib.h"

int main(){
	FILE *f;
	
	//1 tao file
	//2 mo file
	f = fopen("BACH_088.txt", "w");
	if(f == NULL){
		printf("\n LOI TAO HOAC MO FILE");
		exit(1);
	}
	//3 ghi hoac doc 
	int n;
	printf("\n NHap vao n: "); scanf("%d", &n);
	
	fprintf(f, "%d", n);
	//4 dong file
	
	fclose(f);
	
	return 0;
	
	return 0;
}
